class Solution {
public:
    long long fun(vector<int>& a,int n,int speed){
        long long h=0;
        for(int i=0;i<n;i++){
            h=h+a[i]/speed;
            if(a[i]%speed!=0) h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int largest= INT_MIN;
        for(int i=0;i<n;i++){
            if(piles[i]>largest) largest=piles[i];
        }
        int low=1;
        int high= largest;
        int res=-1;
        while(low<=high){
            int guess= low + (high - low+1) / 2;
            long long hour=fun(piles,n,guess);
            if(hour>h)  low=guess+1;  //Low
            else{           //High
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }
};