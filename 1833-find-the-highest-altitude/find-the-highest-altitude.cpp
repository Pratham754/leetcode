class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        ios_base::sync_with_stdio(0);\
        cin.tie(0);
        cout.tie(0);
        for(int i=1;i<gain.size();i++){
            gain[i] +=gain[i-1];
        }
        int maxv = INT_MIN;
        for(int i=0;i<gain.size();i++){
            maxv = max(maxv,gain[i]);
        }
        if(maxv<0) return 0;
        return maxv;
    }
};