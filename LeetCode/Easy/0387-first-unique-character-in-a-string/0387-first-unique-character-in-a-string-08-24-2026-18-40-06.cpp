class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> index;

        for(auto i:s) index[i]++;

        for(int i=0;i<s.size();i++){
            if(index[s[i]]==1) return i;
        }
        return -1;
    }
};