class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> mpp;

        int l=0;
        int r=0;
        int maxi=0;
        int m=INT_MIN;
        while(r<n){
            mpp[s[r]]++;
            maxi=max(maxi,mpp[s[r]]);

            while((r-l+1)-maxi>k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            m=max(m,r-l+1);
            r++;

        }
        return m;
    }
};