class Solution {
    
    
 /*   bool isSafe(int row,int col,vector<string>board,int n)
    {
        int duprow=row;
        int dupcol=col;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        
        col=dupcol;
        row=duprow;
        
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
                col--;
        }
        
        row=duprow;
        col=dupcol;
        
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            
            row++;
            col--;
        }
        return true;
        
    }
    
   */ void Solve(int col,vector<string>&board,vector<vector<string>>&ans,int n,vector<int>leftCol,vector<int>UpperDiagonal,vector<int>LowerDiagonal)
    {
            if(col==n)
            {
                ans.push_back(board);
                return;
            }
        
        for(int row=0;row<n;row++)
        {
            if(leftCol[row]==0 && UpperDiagonal[n-1+ col-row]==0 && LowerDiagonal[row+col]==0)
            {
                board[row][col]='Q';
                leftCol[row]=1;
                UpperDiagonal[n-1+col-row]=1;
                LowerDiagonal[row+col]=1;
                Solve(col+1,board,ans,n,leftCol,UpperDiagonal,LowerDiagonal);
                leftCol[row]=0;
                UpperDiagonal[n-1+col-row]=0;
                LowerDiagonal[row+col]=0;
                board[row][col]='.';
            }
        }
    }
    
    
    
    
    
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        vector<int>leftCol(n,0);
        vector<int>UpperDiagonal(2*n-1,0);
        vector<int>LowerDiagonal(2*n-1,0);
        Solve(0,board,ans,n,leftCol,UpperDiagonal,LowerDiagonal);
        return ans;
        
    }
};