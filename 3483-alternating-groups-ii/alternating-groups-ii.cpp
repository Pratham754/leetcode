class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for(int i=0;i<k-1;i++) colors.push_back(colors[i]);
        //0 1 0 1 0
        //0 1 0 1 0 0 1 0 
        int res = 0;
        int count = 1;
        for(int i = 1; i<colors.size(); i++){
            if(colors[i] != colors[i-1]) count++;
            else count = 1;
            if(count >= k) res++;
        }
         return res;
    }
};