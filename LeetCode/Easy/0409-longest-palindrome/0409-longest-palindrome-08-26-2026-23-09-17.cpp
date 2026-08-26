class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int> mpp;
        
        for(auto i:s) mpp[i]++;

        int cnt=0;
        bool k=false;
        for(auto j:mpp){
            if(j.second%2==0) cnt+=j.second;
            else {
                cnt= cnt + (j.second-1);
                k=true;
                }
        }
        if(k==true) cnt+=1;

        return cnt;
    }
};