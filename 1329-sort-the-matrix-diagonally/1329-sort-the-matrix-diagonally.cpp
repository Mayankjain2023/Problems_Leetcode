class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        
        map<int,priority_queue<int,vector<int>,greater<int>>>d;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                d[i-j].push(mat[i][j]);
            } 
        }
        
        for(int j=0;j<row;j++){
            for(int i=0;i<col;i++){
                mat[j][i]=d[j-i].top();
                d[j-i].pop();
            }
        }
        return mat;
    }
};