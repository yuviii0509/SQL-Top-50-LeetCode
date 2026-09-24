class Solution {
public:

    long long fun(vector<int>& arr,int n,int curr_speed){
        long long  h=0;
        for(int i=0;i<n;i++){
            h = h + arr[i]/curr_speed;
            if(arr[i]%curr_speed!=0) h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest) largest=nums[i];
        }

        int low=1;
        int high=largest;
        int res=-1;

        while(low<=high){
            int guess=low + (high-low+1)/2;
            long long hour= fun(nums,n,guess);

            if(hour>h) low=guess+1;
            else{
                res=guess;
                high=guess-1;
            }

        }
        return res;

    }
};