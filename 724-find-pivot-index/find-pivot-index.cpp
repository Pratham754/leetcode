class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sums = 0;
        for(int i=0;i<nums.size();i++){
            sums += nums[i];
        }
        int rem = 0;
        for(int i=0;i<nums.size();i++){
            sums -= nums[i];
            if(rem == sums) return i;
            rem += nums[i];
        }
        return -1;
    }
};