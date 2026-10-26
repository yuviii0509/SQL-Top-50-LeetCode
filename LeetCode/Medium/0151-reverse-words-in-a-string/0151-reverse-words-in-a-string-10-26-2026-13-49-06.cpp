class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        string word = "";

        for (int i = 0; i <= n; i++) {
            if (i < n && s[i] != ' ') {
                word.push_back(s[i]);
            }
            else {
                if (word.size()!=0) {
                    if (ans.empty())
                        ans = word;
                    else
                        ans = word + " " + ans;

                    word = "";
                }
            }
        }
        return ans;
    }
};
