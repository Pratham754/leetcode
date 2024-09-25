class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};