class Solution {
public:
    string removeStars(string s) {
        string ss = "";
        for(int i=0; i<s.size();i++){
            if(s[i]=='*') ss.pop_back();
            else ss += s[i];
        }
        return ss;
    }
};