class Solution {
public:
    int compress(vector<char>& c) {
        int n=c.size();
        string res="";

        int l=0;
        int r=0;

        while(r<n){
            char ch=c[r];
            int cnt=0;

            while(r<n && c[r]==ch){
                cnt++;
                r++;
            }
            res.push_back(ch);
            if(cnt>1){
                res+= to_string(cnt);
            }
            l=r;
        }

        for(int i=0;i<res.size();i++){
            c[i]=res[i];
        }

        return res.size();
    }
};