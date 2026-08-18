class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        int n=s.size();
        
        for(auto i: s) mpp[i]++;
        
        for(int i=0;i<n;i++){
            if(mpp[s[i]]==1){
            return i;
            }
        }
        return -1;
    }
};