class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxs = 0, currs = 0;
        
        for(int i=0;i<k;i++){
            currs +=nums[i];
        }
        maxs = currs;
        for(int i = k;i<n;i++){
            currs += nums[i] - nums[i-k];
            maxs = max(maxs,currs);
        }
        return maxs/k;
    }
};