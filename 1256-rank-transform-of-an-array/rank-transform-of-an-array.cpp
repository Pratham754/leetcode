class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sa(arr);
        sort(sa.begin(),sa.end());
        sa.erase(unique(sa.begin(),sa.end()), sa.end() );

        unordered_map<int,int> rankmap;
        for(int i=0;i<sa.size();i++){
            rankmap[sa[i]] = i+1;
        }

        vector<int> result(arr.size());
        for(int i=0;i<arr.size();i++){
            result[i] = rankmap[arr[i]];
        }
        return result;
    }
};