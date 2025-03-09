class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> res;
        int n = nums.size();
        vector<int> flipped(n,0);
        for(int i = 1; i < n; i++){
            flipped[i] = flipped[i-1] + ((nums[i] & 1) == (nums[i-1] & 1));
        }
        for(auto& q : queries) res.push_back(flipped[q[0]] == flipped[q[1]]);
        return res;
    }
};