class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mpp;
        mpp[0]=-1;

        int n=nums.size();
        int curr_sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) curr_sum--;
            else curr_sum++;

            if(mpp.find(curr_sum)!=mpp.end()){
                int len= i- mpp[curr_sum];
                maxi=max(maxi,len);
            }
            else mpp[curr_sum]=i;
        }
        return maxi;
    }
};