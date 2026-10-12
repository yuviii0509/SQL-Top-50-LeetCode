class Solution {
public:
    bool isPalindrome(int x) {
        long long int og=x;
        long long int  rev=0;
        while(x>0){
            long long int last= x%10;
            rev=rev * 10 + last;
            x=x/10;
        }

        if(og!=rev) return false;

        return true;
    }
};