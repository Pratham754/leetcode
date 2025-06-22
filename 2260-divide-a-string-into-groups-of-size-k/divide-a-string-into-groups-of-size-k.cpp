class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        int grps = (n + k - 1) / k;
        vector<string> res(grps);
        for (int i = 0; i < grps; i++) {
            string str;
            for (int j = 0; j < k; j++) {
                int index = i * k + j;
                if (index < n)
                    str += s[index];
                else
                    str += fill;
            }
            res[i] = str;
        }
        return res;
    }
};
