class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> res;
        vector<int> flipped(1,0);
        for(int i=1,j=0;i<nums.size();i++){
            if((nums[i] & 1) == (nums[i-1] & 1)) j++;
            flipped.push_back(j);
        }
        for(auto q : queries) res.push_back(flipped[q[0]] == flipped[q[1]]);
        return res;
    }
};