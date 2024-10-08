class Solution {
public:
    int minSwaps(string s) {
        int um = 0;
        for (char c : s) {
            if (c == '[') {
                um++;
            } else if (um > 0) {
                um--;
            }
        }
        return (um + 1) / 2;
    }
};