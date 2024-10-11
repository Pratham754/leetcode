class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int n = nums.size();
        vector<int> op(n);
        op[0] = 1;
        for (int i = 1; i < n; i++) {
            op[i] = op[i - 1] * nums[i - 1];
        }
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            op[i] *= right;
            right *= nums[i];
        }
        return op;
    }
};