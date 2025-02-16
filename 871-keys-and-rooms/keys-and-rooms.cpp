class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);
        stack<int> st;
        st.push(0);
        visited[0] = true;
        int roomcount = 1;

        while(!st.empty()){
            int curr = st.top();
            st.pop();
            for(int key : rooms[curr]){
                if(!visited[key]){
                    st.push(key);
                    visited[key] = true;
                    roomcount++;
                }
            }
        }
        return roomcount == rooms.size();
    }
};