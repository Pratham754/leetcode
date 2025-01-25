class Solution {
public:
    int fib(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};