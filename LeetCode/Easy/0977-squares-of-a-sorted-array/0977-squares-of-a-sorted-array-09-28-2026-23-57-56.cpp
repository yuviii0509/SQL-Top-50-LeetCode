class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int k=n-1;
        vector<int> res(n);

        while(l<=r){
            int left = nums[l]*nums[l];
            int right = nums[r]* nums[r];

            if(right>left){
                res[k]=right;
                r--;
            }
            else{
                res[k]=left;
                l++;
            }
            k--;
        }

        return res;
    }
};