class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        double low=0;
        double high=k-1;

        double avg=0;
        double sum=0;
        for(int i=low;i<=high;i++){
            sum+=nums[i];
        }

        avg=sum/k;
        double res=INT_MIN;
        while(high<n){
            res=max(res,avg);
            low++;
            high++;
            sum= sum - nums[low-1];
            if(high==n) break;
            sum= sum+ nums[high];
            avg= sum /k;
        }
        return res;
    }
};