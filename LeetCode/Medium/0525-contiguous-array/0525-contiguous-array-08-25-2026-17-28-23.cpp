class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        int current_sum=0;
        int max_len=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) current_sum -=1;
            else current_sum +=1;

            if(mpp.find(current_sum) != mpp.end()){
                int len = i - mpp[current_sum];
                max_len= max(max_len,len);
            }
            else mpp[current_sum]= i;
        }
        return max_len;
    }
};