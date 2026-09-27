class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;

        for(int i=0;i<n;i++){
            while(nums[i] != nums[nums[i]-1]){
                int temp=nums[i];
                nums[i]=nums[nums[i]-1];
                nums[temp-1]=temp;
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i] -1 != i) arr.push_back(i+1);
        }
        return arr;
    }
};