class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorCount = 0;
        
        for (const string& detail : details) {
            string ageStr = detail.substr(11, 2);
            int age = stoi(ageStr);
            if (age > 60) {
                seniorCount++;
            }
        }
        return seniorCount;
    }
};