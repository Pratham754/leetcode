class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int num : nums){
            if(num<k) pq.push(num);
        }
        int op = 0;
        while(!pq.empty()){
            int x = pq.top(); pq.pop();
            op++;
            if(pq.empty()) break;
            int y = pq.top(); pq.pop();
            long long newVal = 2LL*x+y;
            if(newVal<k) pq.push(static_cast<int>(newVal));
        }
        return op;
    }
};