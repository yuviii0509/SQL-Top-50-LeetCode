class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++){
            nums[i]=nums[i]* nums[i];
        }

        int l=0; 
        int r=n-1;
        vector<int> ans;
        while(l<=r){
            if(nums[r]>nums[l]){
                ans.push_back(nums[r]);
                r--;
            }
            else{
                ans.push_back(nums[l]);
                l++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};