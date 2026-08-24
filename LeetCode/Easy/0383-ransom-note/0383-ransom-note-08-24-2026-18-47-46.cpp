class Solution {
    bool fun(unordered_map<char,int> ran,unordered_map<char,int> mag){
        for(auto i:ran){
            char c=i.first;
            int need=i.second;
            int have=mag[c];
            if(have<need) return false;
        }
        return true;
    }
public:
    bool canConstruct(string ransome, string magazine) {
        unordered_map<char,int> ran;
                unordered_map<char,int> mag;

                for(auto i:ransome) ran[i]++;
                for(auto j:magazine) mag[j]++;

                return fun(ran,mag);

    }
};