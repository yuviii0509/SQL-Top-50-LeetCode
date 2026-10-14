class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int n=nums.size();
          sort(nums.begin(),nums.end());
          int max_diff=INT_MAX;
          int res=0;
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
        if(i>0 && nums[i]==nums[i-1]) continue;
            while(l<r){
                int total=nums[i]+nums[l]+nums[r];  
                int diff= abs(total-target);
                if(diff<max_diff){
                    max_diff=diff;
                    res=total;
                }
                if(total==target){
                    l++;
                    r--;

                    while(l<n && nums[l]==nums[l-1]) l++;
                    while(r>=0 && nums[r]==nums[r+1]) r--; 
                }
                else if(total>target) r--;
                else l++;

            }
        }
        return res;

    }
};