class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        priority_queue<int> pq;
        for(int num : nums){
            pq.push(num);
        }
        long long res = 0;
        while(k>0){
            int x = pq.top();
            pq.pop();
            res += x;
            pq.push(ceil(x/3.0));
            k--;
        }
        return res;
    }
};