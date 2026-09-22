class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
            int n=nums.size();

            for(int i=0;i<n;i++){
                if(mpp.find(nums[i])==mpp.end()){
                  mpp[nums[i]]=i;
                }
                else{
                    int diff=abs(mpp[nums[i]]-i);
                    if(diff<=k) return true;
                }
                mpp[nums[i]]=i;
                continue;
            }
            return false;
    }
};