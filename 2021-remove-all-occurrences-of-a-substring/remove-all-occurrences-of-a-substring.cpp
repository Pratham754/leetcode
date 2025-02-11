class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res;
        int targetLength = part.size();
        char targetEndChar = part.back();

        for (char currentChar : s) {
            res.push_back(currentChar);

            if (currentChar == targetEndChar && res.size() >= targetLength) {
                if (res.substr(res.size() - targetLength) == part) {
                    res.erase(res.size() - targetLength);
                }
            }
        }
        return res;
    }
};