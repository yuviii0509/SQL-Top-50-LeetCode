class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cur=nums[0];
        int Max=nums[0];
    for(int i=1;i<n;i++){
        cur=max(cur+nums[i],nums[i]);
        Max=max(Max,cur);
    }
    return Max;
    }
};