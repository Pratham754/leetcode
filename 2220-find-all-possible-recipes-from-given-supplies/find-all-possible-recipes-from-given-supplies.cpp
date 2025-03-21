class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        map<string, vector<string>> adjList;
        
        map<string, int>indegree;
        
        for(int i=0; i<ingredients.size(); i++)
        {
            for(auto &item : ingredients[i])
            {
                adjList[item].push_back(recipes[i]);
                
                indegree[recipes[i]]++;
            }
        }
        
        queue<string>q;
        
        for(auto &x : supplies)
            if(indegree[x]==0)
                q.push(x);
        
        while(!q.empty())
        {
            string node = q.front();
            q.pop();
            
            
            for(auto &nei : adjList[node])
            {
                indegree[nei]--;
                
                if(indegree[nei]==0)
                    q.push(nei);
            }
        }
        
        
        vector<string> ans;
        
        for(auto &x : recipes)
            if(indegree[x]==0)
                ans.push_back(x);
            
        return ans;
    }
};