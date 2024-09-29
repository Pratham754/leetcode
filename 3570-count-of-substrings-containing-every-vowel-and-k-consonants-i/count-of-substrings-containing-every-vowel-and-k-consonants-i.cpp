class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int n = word.size(), ans = 0;
        for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                int consonants = 0;
                bool a = false, e = false, i = false, o = false, u = false;
                for (int it = start; it <= end; it++) {
                    if (word[it] == 'a') a = true;
                    else if (word[it] == 'e') e = true;
                    else if (word[it] == 'i') i = true;
                    else if (word[it] == 'o') o = true;
                    else if (word[it] == 'u') u = true;
                    else consonants++;
                }
                if (a && e && i && o && u && consonants == k) ans++;
            }
        }
        return ans;
    }
};