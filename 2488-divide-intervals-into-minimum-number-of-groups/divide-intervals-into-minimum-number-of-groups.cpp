class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> st_times, end_times;

        for(const auto& interval : intervals){
            st_times.push_back(interval[0]);
            end_times.push_back(interval[1]);
        }

        sort(st_times.begin(),st_times.end());
        sort(end_times.begin(),end_times.end());

        int end_ptr = 0, grp = 0;
        for(int st : st_times){
            if(st > end_times[end_ptr]) end_ptr++;
            else grp++;
        }
        return grp;
    }
};