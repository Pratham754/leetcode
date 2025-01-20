class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, zeroCount = 0, res = 0;
        for(int right = 0; right < n; right++){
            if(nums[right] == 0){
                zeroCount++;
            }
            while(zeroCount>1){
                if(nums[left]==0){
                    zeroCount--;
                }
                left++;
            }
            res = max(res,right-left+1-zeroCount);
        }
        return (res==n) ? res-1 :res;
    }
};