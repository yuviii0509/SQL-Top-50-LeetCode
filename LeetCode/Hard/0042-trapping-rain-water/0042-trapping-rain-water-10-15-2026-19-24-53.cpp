class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();

        if(n==0) return 0;
        vector<int> left_max(n);
        vector<int> right_max(n);

        left_max[0]=h[0];
        right_max[n-1]=h[n-1];
        for(int i=1;i<n;i++){
            if(h[i]>left_max[i-1]) left_max[i]=h[i];
            else left_max[i]=left_max[i-1];
        }

        for(int i=n-2;i>=0;i--){
            if(h[i]>right_max[i+1]) right_max[i]=h[i];
            else right_max[i]=right_max[i+1];
        }
        int height=0;
        for(int i=0;i<n;i++){
            height += min(left_max[i],right_max[i]) - h[i];
        }
        return height;
    }
};