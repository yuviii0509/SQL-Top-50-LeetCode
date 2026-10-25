class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0;
        int high=k-1;
        int n=arr.size();
        int sum=0;
        int cnt=0;

        for(int i=low;i<=high;i++){
            sum += arr[i];
        }
        int avg=sum/k;
        if(avg>=threshold) cnt++;
        high++;
        while(high<n){
            sum -= arr[low];
            low++;
            sum +=arr[high];
            avg=sum/k;
            high++;
            if(avg>=threshold) cnt++;    
        }
    return cnt;
    }
};