class Solution {
public:
    int dfs(vector<vector<int>>& grid,vector<vector<bool>>& vis,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        // calculate top and side and down
        if(i<0||j<0||i>=n||j>=m||grid[i][j]==0) return 1;

        if(vis[i][j]) return 0;
        vis[i][j]=true;

        return (dfs(grid,vis,i-1,j)+
        dfs(grid,vis,i+1,j)+
        dfs(grid,vis,i,j-1)+
        dfs(grid,vis,i,j+1));
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<bool>> vis(n,vector<bool>(m,false));
     
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    
                    return dfs(grid,vis,i,j);      
                }
            }
        }
        return 0;
    }
};