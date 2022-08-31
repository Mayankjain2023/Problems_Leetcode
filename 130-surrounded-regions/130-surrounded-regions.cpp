class Solution {
    
private:
    
    void dfs(int row,int col,vector<vector<int>>&vis ,vector<vector<char>>&board){
        
        
        vis[row][col]=1;
        int dir[]={-1,0,+1,0};
        int dic[]={0,+1,0,-1};
        
        for(int i=0;i<4;i++){
            int nrow=row+dir[i];
            int ncol=col+dic[i];
            if(nrow>=0 && nrow<board.size() && ncol>=0 && ncol<board[0].size() && vis[nrow][ncol]!=1
              && board[nrow][ncol]=='O'){
                
                dfs(nrow,ncol,vis,board);
                
            }
            
            
        }
    }
    
    
public:
    void solve(vector<vector<char>>& board) {
        
        int row=board.size();
        int col=board[0].size();
        
        vector<vector<int>>vis(row,vector<int>(col,0));
        
        for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
              if(i==0 || j==0 || i==row-1 || j==col-1){
                  if(!vis[i][j] && board[i][j]=='O'){
                      
                      dfs(i,j,vis,board);
                      
                  }
              }
          }
        }
        
        
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(vis[i][j]!=1 && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        
    }
};