class Solution {
public:
bool check(int row,int col,vector<string>& board,int n){
    // upper column
    // upper left right diagnol
    for(int r=row-1;r>=0;r--){
        if(board[r][col]=='Q'){
            return false;
        }
    }

    for(int r=row-1,c=col+1;r>=0 && c<n;r--,c++){
        if(board[r][c]=='Q'){
            return false;
        }
    }

    for(int r=row-1,c=col-1;r>=0 && c>=0;r--,c--){
        if(board[r][c]=='Q'){
            return false;
        }
    }
    return true;
}
void func(int r,int n,vector<string>& board,vector<vector<string>>& fans){

    // base cond

    if(r==n){
        fans.push_back(board);
        return;
    }
    for(int c=0;c<n;c++){
        if(check(r,c,board,n)){
        board[r][c]='Q';
        
        func(r+1,n,board,fans);
        board[r][c]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> fans;
        vector<string> board(n, string(n,'.'));
        func(0,n,board,fans);
        return fans;
    }
};
