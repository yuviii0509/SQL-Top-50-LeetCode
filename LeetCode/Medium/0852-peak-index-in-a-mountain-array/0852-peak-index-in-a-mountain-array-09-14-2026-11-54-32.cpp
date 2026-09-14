class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int n=arr.size()-1;

        while(i<n){
            if(arr[i]<arr[i+1]){
                i++;
                continue;
            }
            else return i;
        }
        return -1;
    }
};