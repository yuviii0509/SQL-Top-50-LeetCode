class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;

        vector<int> prefix(n,0);
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }

        vector<int> suffix(n,0);
        for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+nums[i+1];
        }

        for(int i=0;i<n;i++){
            if(suffix[i]==prefix[i]) return i;
        }
        return -1;
    }
};