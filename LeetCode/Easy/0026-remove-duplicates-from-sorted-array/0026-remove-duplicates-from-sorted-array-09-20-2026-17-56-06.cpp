class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int uni=1;
    int n=nums.size();
    vector<int> res(n);
    int j=1;
    res[0]=nums[0];
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]) continue;
        else {
            uni++;
            res[j]=nums[i+1];
            j++;
        }
    }
    nums=res;
    return uni;
    }
};