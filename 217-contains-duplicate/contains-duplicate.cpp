class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it : nums){
            if(st.contains(it)) return true;
            else st.insert(it);
        }
        return false;
    }
};