class Solution {
public:
    int firstoc(vector<int>& nums, int target){
        int low=0;
        int high= nums.size()-1;
        int res=-1;
        while(low<=high){
            int guess= low+(high-low+1)/2;

            if(nums[guess]>target) high=guess-1;
            else if(nums[guess]<target) low=guess+1;
            else{
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }

   int lastoc(vector<int>& nums, int target){
        int low=0;
        int high= nums.size()-1;
        int res=-1;
        while(low<=high){
            int guess= low + (high-low+1)/2;

            if(nums[guess]>target) high=guess-1;
            else if(nums[guess]<target) low=guess+1;
            else{
                res=guess;
                low=guess+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first= firstoc(nums,target);
        int last = lastoc(nums,target);

        return {first,last};
    }
};