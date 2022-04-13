class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>matrix(n,vector<int>(n));
        int r1=0,c1=0;
        int r2=n-1,c2=n-1;
        int value=0;
        
        
        while(r1<=r2 && c1<=c2)
        {
            //left to right
            for(int i=c1;i<=c2;i++)
            {
                matrix[r1][i]=++value;
            }
            
            for(int i=r1+1;i<=r2;i++)
            {
                matrix[i][c2]=++value;
            }
            
                for(int i=c2-1;i>=c1;i--)
                {
                    matrix[r2][i]=++value;
                }
            
                for(int i=r2-1;i>r1;i--)
                {
                    matrix[i][c1]=++value;
                }
              
                ++r1;
                --r2;
                ++c1;
                --c2;
        }
        
        return matrix;
    }
};