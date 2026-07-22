class Solution {
public:int dfs(vector<vector<int>>& grid,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        // calculate top and side and down
        if(i<0||j<0||i>=n||j>=m||grid[i][j]==0) return 0;

        // if(vis[i][j]) return 0;
        // vis[i][j]=true;
        grid[i][j]=0;

        return 1+(dfs(grid,i-1,j)+
        dfs(grid,i+1,j)+
        dfs(grid,i,j-1)+
        dfs(grid,i,j+1));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

       // vector<vector<bool>> vis(n,vector<bool>(m,false));

       int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    
                    ans = max(ans,dfs(grid,i,j));      
                }
            }
        }
        return ans;

        
    }
};
