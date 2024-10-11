class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);


        for(int i=0;i<flowerbed.size();i++){
            bool left = i == 0 || flowerbed[i-1]==0;
            bool right = i == flowerbed.size()-1 || flowerbed[i+1] == 0;
            if(left && right && flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};