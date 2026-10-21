class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mpp;

        int low=0;
        int high=0;
        int res= INT_MIN;
        while(high<n){
           if(mpp.find(s[high])!=mpp.end() && mpp[s[high]]>0){
            mpp[s[low]]--;
            low++;
           }
           else{
            mpp[s[high]]++;
            res= max(res,high-low+1);
            high++;
           }

        }
        if(res==INT_MIN) return 0;
        return res;
    }
};