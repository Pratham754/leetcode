class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1;
        int d = 0;

        while(n--){
            ans+=d;
            d+=4;
        }

        return ans;

    }
};