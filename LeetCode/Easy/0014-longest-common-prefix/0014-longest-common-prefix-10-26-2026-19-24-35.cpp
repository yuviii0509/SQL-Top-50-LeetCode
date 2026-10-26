class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        if(n==1) return s[0];
        sort(s.begin(),s.end());
        string res="";
        string first=s[0];
        string last=s[n-1];
        
        
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]) return res;
            res+=first[i];
        }
        return res;
    }
};