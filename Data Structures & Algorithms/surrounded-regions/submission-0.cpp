class Solution {
public:
    void func(vector<vector<char>>& grid,int i,int j){
         int n=grid.size();
        int m=grid[0].size();

        if(i<0||j<0||i>=n||j>=m||grid[i][j]!='O') return;
        grid[i][j] = '#';
        func(grid,i-1,j);
        func(grid,i+1,j);
        func(grid,i,j+1);
        func(grid,i,j-1);
    }
    void solve(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            func(grid,i,0);
            func(grid,i,m-1);
        }

        for(int j=0;j<m;j++){
            func(grid,0,j);
            func(grid,n-1,j);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O') grid[i][j] = 'X';
                else if(grid[i][j]=='#') grid[i][j]='O';
            }
        }
    }
};
