class Solution {
public:

    bool dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& path, int i) {
        vis[node] = 1;
        path[node] = i;
        if (node == 0) return true;
        for (auto &it : adj[node]) {
            if (!vis[it]) {
                if (dfs(it, adj, vis, path, i + 1)) return true;
            }
        }
        path[node] = 0;
        return false;
    }

    int dfs2(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& path, vector<int>& amount, int i) {
        vis[node] = 1;
        int sum = 0;
        
        if (path[node]==0 or path[node] > i) {
            sum += amount[node];
        } else if (path[node] == i) {
            sum += amount[node] / 2;
        }
        int count = INT_MIN;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                count = max(count, dfs2(it, adj, vis, path, amount, i + 1));
            }
        }

        if(count==INT_MIN) count = 0;
        return sum+count;

        
    }

    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = amount.size();
        vector<vector<int>> adj(n);
        
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> path(n, 0);
        vector<int> visited(n, 0);
        
        dfs(bob, adj, visited, path, 1);
        
        fill(visited.begin(), visited.end(), 0);
        return dfs2(0, adj, visited, path, amount, 1);
    }
};