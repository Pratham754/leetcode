class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = 0;
        for(int i : candies){
            maximum = max(maximum,i);
        }
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            ans.push_back(candies[i]+ extraCandies >= maximum);
        }
        return ans;
    }
};