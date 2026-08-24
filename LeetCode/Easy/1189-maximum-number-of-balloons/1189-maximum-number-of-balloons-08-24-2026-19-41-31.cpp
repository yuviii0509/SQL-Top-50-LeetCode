class Solution {
    int fun(unordered_map<char,int> have,unordered_map<char,int> need){
         int res=INT_MAX;
        for(auto i:need){
            char c=i.first;
            int fneed=i.second;
            int fhave=have[c];

            int times= fhave/fneed;
            res=min(res,times);
            }
            return res;
        }
public:
    int maxNumberOfBalloons(string text) {
        string n ="balloon";
        unordered_map<char,int> have;
        unordered_map<char,int> need;

        for(auto i:text) have[i]++;
        for(auto i:n) need[i]++;

        return fun(have,need);

    }
};