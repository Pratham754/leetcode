class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        ranges::sort(g);
        ranges::sort(s);
        int count = 0;
        int i=0;
        int j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count;
    }
};