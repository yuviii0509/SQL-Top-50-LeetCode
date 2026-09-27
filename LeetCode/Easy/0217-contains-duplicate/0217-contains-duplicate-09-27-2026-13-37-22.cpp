class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        
        for(auto i: nums) mpp[i]++;
        for(auto j:mpp){
            if(j.second>1) return true;
        }
        return false;
    }
};