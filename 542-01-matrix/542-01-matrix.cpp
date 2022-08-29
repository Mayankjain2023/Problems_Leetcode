class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        
        int row=mat.size();
        int col=mat[0].size();
        
        vector<vector<int>>vis(row,vector<int>(col,0));
        vector<vector<int>>dist(row,vector<int>(col,0));
        
        queue<pair<pair<int,int>,int>>q;
        
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(mat[i][j]==0){
                    
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
                else{
                    vis[i][j]=0;
                }
                
            }
        }
        
        
        while(!q.empty()){
            
            int nrow=q.front().first.first;
            int ncol=q.front().first.second;
            
            int steps=q.front().second;
            q.pop();
            
            dist[nrow][ncol]=steps;
            
            int delRow[]={-1,0,+1,0};
            int delCol[]={0,+1,0,-1};
            
            for(int i=0;i<4;i++){
                int trow=nrow+delRow[i];
                int tcol=ncol+delCol[i];
                
                if(trow>=0 && trow<row && tcol>=0 && tcol< col && vis[trow][tcol]==0){
                    
                    vis[trow][tcol]=1;
                    q.push({{trow,tcol},steps+1});
                    
                }
            }
        }
        
        return dist;
    }
};