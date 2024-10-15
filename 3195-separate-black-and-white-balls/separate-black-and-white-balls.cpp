class Solution {
public:
    long long minimumSteps(string s) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        long ans = 0;
        int ones = 0;

        for (const char c : s)
            if (c == '1') {
                ++ones;
            } else {
                ans += ones;
            }
        return ans;
    }
};