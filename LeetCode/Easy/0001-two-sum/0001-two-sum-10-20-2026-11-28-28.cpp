class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int search= target-nums[i];

            if(mpp.find(search)!=mpp.end()){
                return {i,mpp[search]};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};