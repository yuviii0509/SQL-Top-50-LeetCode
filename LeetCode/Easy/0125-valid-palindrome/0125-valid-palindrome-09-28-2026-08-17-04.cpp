class Solution {
public:
    bool isPalindrome(string s) {
        vector<int> arr;
         
         int n=s.size();

         for(int i=0;i<n;i++){
            if(isalnum(s[i])){   // isalnum check karega ki wo A-Z, a-z, ya 0-9 hai
           char ch=tolower(s[i]);
            arr.push_back(ch);
            }
         }

        if(arr.size()==0) return true;

         int l=0;
         int r=arr.size()-1;
         while(l<=r){
            if(arr[l]!=arr[r]) return false;
            l++;
            r--;
         }
         return true;
    }
};