class Solution {
public:
    int countOfSubstrings(string s, int k) {
        set<char> st = {'a', 'e', 'i', 'o', 'u'};
        int n = s.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            set<char> stt;
            int co = 0;
            for (int j = i; j < n; j++) {
                if (st.count(s[j]))
                    stt.insert(s[j]);
                else
                    ++co;
                if (stt.size() == 5 && co == k)
                    ++res;
            }
        }
        return res;
    }
};