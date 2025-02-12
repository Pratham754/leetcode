class Solution {
public:
    vector<int>dp;
    int rob(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return robhouse(nums,nums.size()-1);
    }
    int robhouse(vector<int>& nums, int i) {
        if(i<0) return 0;
        if(dp[i]>=0) return dp[i];
        int res =  max(robhouse(nums,i-2)+nums[i], robhouse(nums,i-1));
        dp[i] = res;
        return res;
    }
};