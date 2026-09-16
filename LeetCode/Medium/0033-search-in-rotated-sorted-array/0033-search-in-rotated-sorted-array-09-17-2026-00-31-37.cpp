class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;

        int k=-1;
        while(low<=high){
            int guess =low+(high-low+1)/2;
            if(nums[guess]>nums[n-1]) low=guess+1;
            else{
                k=guess;
                high=guess-1;
            }
        }
        
        int l=0;
        int r=k-1;
        while(l<=r){
            int guess= l + (r-l+1)/2;
            if(nums[guess]==target) return guess;
            else if(nums[guess]>target) r=guess-1;
            else l=guess+1;
        }

         int left=k;
        int right=n-1;
        while(left<=right){
            int guess= left + (right-left+1)/2;
            if(nums[guess]==target) return guess;
            else if(nums[guess]>target) right=guess-1;
            else left=guess+1;
        }
        return -1;
    }
};