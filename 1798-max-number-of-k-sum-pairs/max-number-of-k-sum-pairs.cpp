class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int count = 0, i = 0, j = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j] == k){
                count++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j] > k) j--;
            else if(nums[i]+nums[j] < k) i++;
        }
        return count;
    }
};