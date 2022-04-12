class Solution {
public:
   /* int R,C;
    bool liveCell(int value)
    {
        return value==1;
    }
    
    int getcellsCount(int row,int col,vector<vector<int>>&temp)
    {
        int count=0;
       // int r=temp.size();
        //int c=temp[0].size();
        
        count+=row-1>=0 && temp[row-1][col]?1:0;
        count+=col-1>=0 &&temp[row][col-1]?1:0;
        count+=col+1<C && temp[row][col+1]?1:0;
        count+=row+1<R && temp[row+1][col]?1:0;
        
        count+=row-1>=0 && col-1>=0 &&temp[row-1][col-1]?1:0;
        count+=row+1<R && col+1<C &&temp[row+1][col+1]?1:0;
        count+=row+1<R && col-1>=0 &&temp[row+1][col-1]?1:0;
        count+=row-1>=0 && col+1<C &&temp[row-1][col+1]?1:0;
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        R=board.size();
        C=board[0].size();
        
        vector<vector<int>>temp=board;
        int liveCellsCount=0;
        
        for(int r=0;r<R;r++)
        {
            for(int c=0;c<C;c++)
            {
                liveCellsCount=getcellsCount(r,c,temp);   
                if(liveCell(board[r][c]))
                {
                    if(liveCellsCount<2 || liveCellsCount>3) board[r][c]=0;
                    else {
                        board[r][c]=liveCellsCount==3?1:0;
                    }
                }
            }
                   
        }
        
    }
    */
     int R, C;
    bool isLive(int status) {
        return status == 1;
    }
    int getLiveNeighborsCnt(int row, int col, vector<vector<int>>& board) {
        int cnt = 0;
        cnt += row - 1 >= 0 && board[row - 1][col] ? 1 : 0;
        cnt += row + 1 < R && board[row + 1][col] ? 1 : 0;
        cnt += col - 1 >= 0 && board[row][col - 1] ? 1 : 0;
        cnt += col + 1 < C && board[row][col + 1] ? 1 : 0;
        cnt += row - 1 >= 0 && col - 1 >= 0 && board[row - 1][col - 1] ? 1 : 0;
        cnt += row - 1 >= 0 && col + 1 < C && board[row - 1][col + 1] ? 1 : 0;
        cnt += row + 1 < R && col - 1 >= 0 && board[row + 1][col - 1] ? 1 : 0;
        cnt += row + 1 < R && col + 1 < C && board[row + 1][col + 1] ? 1 : 0;
        
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        R = board.size(), C = board[0].size();
		int liveNeighborsCnt;
		// store current board state
        vector<vector<int>> tempBoard = board;        
        for(int r = 0; r < R; r++) {
            for(int c = 0; c < C; c++) {
				// compute number of live neighbors
                liveNeighborsCnt = getLiveNeighborsCnt(r, c, tempBoard);
				// Apply conditions and update state of board
                if(isLive(board[r][c])) {
                    if(liveNeighborsCnt < 2 || liveNeighborsCnt > 3) board[r][c] = 0;
                } else {
                    board[r][c] = liveNeighborsCnt == 3 ? 1 : 0;
                }
            }
        }
    }
                   
};