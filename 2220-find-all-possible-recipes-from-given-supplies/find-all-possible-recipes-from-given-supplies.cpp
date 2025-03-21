class Solution {
public:
    vector<string> findAllRecipes(const vector<string>& recipes, const vector<vector<string>>& ingredients, const vector<string>& supplies) {
        const unordered_set have(supplies.cbegin(), supplies.cend());
        const int n = (int)recipes.size();
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
            mp[recipes[i]] = i;
        vector<vector<int>> adj(n);
        vector<int> degree(n);
        for (int i = 0; i < n; i++) {
            degree[i] = (int)ingredients[i].size();
            for (const auto& s : ingredients[i]) {
                if (have.contains(s))
                    degree[i]--;
                if (mp.contains(s))
                    adj[mp[s]].push_back(i);
            }
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
            if (!degree[i])
                q.push(i);
        vector<string> ret;
        while (!q.empty()) {
            const auto u = q.front();
            q.pop();
            ret.push_back(recipes[u]);
            for (const auto v : adj[u])
                if (--degree[v] == 0) q.push(v);
        }
        return ret;
    }
};