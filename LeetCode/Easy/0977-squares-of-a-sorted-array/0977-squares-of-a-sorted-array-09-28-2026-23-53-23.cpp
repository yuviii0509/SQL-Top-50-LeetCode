class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }

        int l=0;
        int r=n-1;
        vector<int> res;

        while(l<=r){
            if(nums[r]>nums[l]){
                res.push_back(nums[r]);
                r--;
            }
            else{
                res.push_back(nums[l]);
                l++;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};