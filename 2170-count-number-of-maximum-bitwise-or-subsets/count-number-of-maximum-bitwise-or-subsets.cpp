class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n = nums.size();
        int m = 0, c = 0;

        for (int x : nums) {
            m |= x;
        }

        int t = 1 << n;
        for (int mask = 1; mask < t; ++mask) {
            int o = 0;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    o |= nums[i];
                }
            }
            if (o == m) {
                ++c;
            }
        }
        return c;
    }
};