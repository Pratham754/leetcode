class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(),nums.end());
        int cmin = 1, cmax = 1;

        for(int i : nums){
            int temp = cmax * i;
            cmax = max({temp,cmin*i,i});
            cmin = min({temp,cmin*i,i});
            res = max(res,cmax);
        }
        return res;
    }
};