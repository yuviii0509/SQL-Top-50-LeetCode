class Solution {
    bool fun(unordered_map<char, int> have, unordered_map<char, int> need) {
        for (auto i : need) {
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            if (fhave < fneed)
                return false;
        }
        return true;
    }
public:
    bool canConstruct(string ransome, string magazine) {
        unordered_map<char, int> need;
        unordered_map<char, int> have;

        if (magazine.size() < ransome.size())
            return false;

        for (int i = 0; i < ransome.size(); i++) {
            need[ransome[i]]++;
        }
        for (auto j : magazine)
            have[j]++;

        return fun(have, need);
    }
};