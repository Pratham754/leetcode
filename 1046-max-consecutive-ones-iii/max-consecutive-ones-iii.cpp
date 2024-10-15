class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int l=0, r=0, maxOnes=0;
        while(r<nums.size()){
            if(nums[r]==0){
                k--;
            }
            r++;

            while(k<0){
                if(nums[l]==0){
                    k++;
                }
                l++;
            }
            maxOnes = max(maxOnes,r-l);
        }
        return maxOnes;
    }
};