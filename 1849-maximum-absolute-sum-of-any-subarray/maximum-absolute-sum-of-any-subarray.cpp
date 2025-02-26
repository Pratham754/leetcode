class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int sum = 0, minSum = 0, maxSum = 0;
        for (int num : nums) {
            sum += num;
            if (sum > maxSum)
                maxSum = sum;
            if (sum < minSum)
                minSum = sum;
        }
        return abs(maxSum - minSum);
    }
};