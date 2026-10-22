class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n=f.size();
        int low=0;
        int high=0;
        int maxi= INT_MIN;
        unordered_map<int,int> mpp;

        while(high<n){
            mpp[f[high]]++;

            if(mpp.size()<=2){
                int len = high-low+1;
                maxi=max(maxi,len);
            }
            else{
                mpp[f[low]]--;
                if(mpp[f[low]]==0) mpp.erase(f[low]);
                low++;
            }
            high++;
        }
        return maxi;
    }
};