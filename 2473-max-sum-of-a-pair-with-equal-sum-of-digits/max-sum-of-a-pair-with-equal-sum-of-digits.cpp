class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int maxArr[82] = {0};
        int ans = -1;
        for(int x : nums){
            int sum = 0;
            int temp = x;
            while(temp != 0){
                sum += temp%10;
                temp /= 10;
            }
            if(maxArr[sum] != 0) ans = max(ans,x+maxArr[sum]);
            maxArr[sum] = max(maxArr[sum],x);
        }
        return ans;
    }
};