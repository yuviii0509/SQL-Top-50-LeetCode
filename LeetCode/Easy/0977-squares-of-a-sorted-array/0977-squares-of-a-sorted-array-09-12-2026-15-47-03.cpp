class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int nn=nums.size();

        for(int i=0;i<nn;i++){
            if(nums[i]<0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }

        int p=pos.size();
        int n=neg.size();

        for(int i=0;i<p;i++){
            pos[i]=pos[i]*pos[i];
        }

        for(int j=0;j<n;j++){
            neg[j]=neg[j]*neg[j];
        }

        reverse(neg.begin(),neg.end());

        int i=0;
        int j=0;
        int index=0;
        vector<int> ans(p+n);
        while(i<p && j<n){
            if(pos[i]<neg[j]){
                ans[index]=pos[i];
                index++;
                i++;
            }
            else{
                ans[index]=neg[j];
                index++;
                j++;
            }
        }

        while(i<p){
            ans[index]=pos[i];
            index++;
            i++;
        }

        while(j<n){
            ans[index]=neg[j];
            index++;
            j++;
        }

        return ans;
    }
};