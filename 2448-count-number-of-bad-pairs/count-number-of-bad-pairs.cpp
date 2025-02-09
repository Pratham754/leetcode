class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        

        unordered_map<int,int> freq;
        long long goodPairs = 0, n = nums.size();

        for(int i=0;i<n;i++){
            int key = nums[i]-i;
            goodPairs += freq[key];
            freq[key]++;
        }
        return (n*(n-1))/2 - goodPairs;
    }
};