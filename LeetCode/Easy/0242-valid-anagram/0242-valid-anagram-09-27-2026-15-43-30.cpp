class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        int k=t.size();
        for(int i=0;i<max(n,k);i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};