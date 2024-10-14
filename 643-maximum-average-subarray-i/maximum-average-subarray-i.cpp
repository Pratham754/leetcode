class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

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