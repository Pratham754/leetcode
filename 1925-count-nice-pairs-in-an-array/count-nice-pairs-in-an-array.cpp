class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while (n) {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        return rev;
    }

    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans = 0, mod = 1e9 + 7;

        for( auto x : nums){
            int t = x - reverse(x);
            m[t]++;
        }

        for(auto x : m){
            if(x.second > 1){
                long long n = x.second;
                ans = (ans + (n*(n-1)/2))%mod;
            }
        }
        return ans;
    }
};