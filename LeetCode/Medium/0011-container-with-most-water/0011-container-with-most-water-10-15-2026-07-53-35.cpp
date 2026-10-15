class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int maxi=0;

        while(l<r){
            int height= min(h[l],h[r]);
            int width=r-l;
            int area= height * width;
             maxi=max(maxi,area);

            if(h[l]<h[r]) l++;
            else r--;
            
        }
        return maxi;
    }
};