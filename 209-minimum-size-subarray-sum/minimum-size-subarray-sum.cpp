class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int i=0,j=0,sum=0,mn=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                sum -= nums[i];
                mn=min(j-i+1,mn);
                i++;
            }
            j++;
        }
        return mn == INT_MAX ? 0 : mn;
    }
};