class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int big = *max_element(piles.begin(),piles.end());
        int left = 1, right = big, mid;
        while(left<=right){
            mid = (left+right)/2;
            long long res = 0;
            for(int x : piles){
                res += (x + mid - 1) / mid;
            }
            if(res>h) left = mid+1;
            else right = mid-1;
        }
        return left;
    }
};