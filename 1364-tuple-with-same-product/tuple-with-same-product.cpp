class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        unordered_map<int,int>mp;
        int ans=0, n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int product = nums[i]*nums[j];
                ans += 8*mp[product];
                mp[product]++;
            }
        }
        return ans;
    }
};