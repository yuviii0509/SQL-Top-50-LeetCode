class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int n=nums.size();
    
        int cnt=0;

        for(int l=0;l<n;l++){
            int pro=1;
            int h=l;
            pro=pro * nums[l];

            while(pro<k){
                cnt++;
                if(h+1>=n) break;
                pro=pro*nums[h+1];
                h++;
            }
        }
        return cnt;
    }
};