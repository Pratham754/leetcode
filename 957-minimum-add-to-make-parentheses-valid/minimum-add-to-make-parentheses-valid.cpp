class Solution {
public:
    int minAddToMakeValid(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int open = 0, mismatch = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') open++;
            else{
                if(open>0) open--;
                else mismatch++;
            }
        }
        return open+mismatch;
    }
};