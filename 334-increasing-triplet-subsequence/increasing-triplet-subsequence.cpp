class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (nums.size() < 3)
            return false;
        int a = INT_MAX;
        int b = INT_MAX;

        for (int n : nums) {
            if (n <= a) {
                a = n;
            } else if (n <= b) {
                b = n;
            } else
                return true;
        }
        return false;
    }
};