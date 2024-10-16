class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        ios_base::sync_with_stdio(0);\
        cin.tie(0);
        cout.tie(0);
     
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