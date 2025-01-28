class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> counts;
        string current = "";
        int k=0;

        for(char c : s){
            if(isdigit(c)){
                k = k*10+(c-'0');
            }
            else if(c=='['){
                st.push(current);
                counts.push(k);
                current = "";
                k=0;
            }
            else if(c==']'){
                string prev = st.top();
                st.pop();
                int repeatCount = counts.top();
                counts.pop();

                string temp = current;
                for(int i=1;i<repeatCount;i++){
                    current += temp;
                }
                current = prev+current;
            }
            else{
                current += c;
            }
        }
    return current;
    }
};