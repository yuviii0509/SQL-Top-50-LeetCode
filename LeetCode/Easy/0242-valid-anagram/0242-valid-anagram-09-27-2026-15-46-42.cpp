class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp;
        if(s.size()!=t.size()) return false;

        for(auto i:s) mpp[i]++;
        for(auto j:t) mpp[j]--;

        for(auto k:mpp){
            if(k.second!=0) return false;
        }
        return true;
    }
};