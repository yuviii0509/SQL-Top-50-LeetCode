class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //a[i]+x+y==0 hona chahiye so ham x+y==-(a[i])
        //phele ham sort kr lenge 
        //Left Pointer: Start hoga theek i ke aage wale element se, yaani left = i + 1.
        //Right Pointer: Start hoga array ke sabse aakhri element se, yaani right = n - 1.
        //Outer loop mein fixed element ke duplicates skip karna (nums[i] == nums[i-1]).
        //Inner loop mein pair milne ke baad left aur right ke duplicates skip karna.
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            int sum = -1*(nums[i]);
            if(i>0 && nums[i]==nums[i-1]) continue; //Outer loop mein fixed element ke duplicates skip karne ke liye 
            while(l<r){                     // don't use l<=r use l<r
                int curr_sum= nums[l]+nums[r];
                if(curr_sum==sum){
                res.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;

                while(l<r && nums[l]==nums[l-1]) l++;
                while(l<r && nums[r]==nums[r+1]) r--;
                }
                else if(curr_sum<sum) l++;
                else r--;

            }
        }
    return res;
    }
};