class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int blacks = 0, ans = INT_MAX;
        for (int i = 0; i < blocks.size(); i++) {
            if (i - k >= 0 && blocks[i - k] == 'B')
                blacks--;
            if (blocks[i] == 'B')
                blacks++;
            ans = min(ans, k - blacks);
        }
        return ans;
    }
};