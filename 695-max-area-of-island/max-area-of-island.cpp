class Solution {
public:
    int dfs(vector<vector<int>>&a, int i, int j){
        if(i<0 || j<0 || i>=a.size() || j>=a[0].size() || a[i][j]==0) return 0;
        a[i][j] = 0;
        int area = 1;
        area += dfs(a,i-1,j); 
        area += dfs(a,i+1,j); 
        area += dfs(a,i,j-1); 
        area += dfs(a,i,j+1);
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size(), c = grid[0].size(), maxArea = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    maxArea = max(maxArea,dfs(grid,i,j));
                }
            }
        }
        return maxArea;
    }
};