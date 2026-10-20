class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<pair<int,int>> freq;
        for(auto i:nums) mpp[i]++;

        vector<int> ans;
        for(auto i:mpp){
            freq.push_back({i.second,i.first});
        }
        sort(freq.rbegin(),freq.rend());
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};