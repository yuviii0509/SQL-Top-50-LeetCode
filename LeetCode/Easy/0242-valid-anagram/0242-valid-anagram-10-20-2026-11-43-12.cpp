class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<int,int> mpp;

        for(auto i:s) mpp[i]++;
        for(auto j:t) mpp[j]--;

        for(auto k:mpp){
            if(k.second!=0) return false;
        }
        return true;
    }
};