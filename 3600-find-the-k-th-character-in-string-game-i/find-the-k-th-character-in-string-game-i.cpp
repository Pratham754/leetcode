class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.length() < k) {
            string temp;
            for (char c : word) {
                if (c == 'z') temp.push_back('a');
                else temp.push_back(c + 1);
            }
            word += temp;
        }
        return word[k - 1];
    }
};