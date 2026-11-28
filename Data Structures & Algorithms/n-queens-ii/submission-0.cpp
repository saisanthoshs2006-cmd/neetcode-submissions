class Solution {
public:
    bool check(int row,int col,vector<string>& board,int n){

        
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

    void func(int r,int n,vector<string>& board,
              int& cnt){

        if(r==n){
            cnt++;
            return;
        }

        for(int c=0;c<n;c++){
            if(check(r,c,board,n)){
                board[r][c]='Q';

                func(r+1,n,board,cnt);

                board[r][c]='.';
            }
        }
    }

    int totalNQueens(int n){
        int cnt=0;
        vector<string> board(n,string(n,'.'));

        func(0,n,board,cnt);

        return cnt;
    }
};