class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]) != st.end()) return true;
            st.insert(nums[i]);
            if(i>=k) st.erase(nums[i-k]);
        }
        return false;
    }
};