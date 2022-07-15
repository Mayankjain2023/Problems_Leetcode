class Solution {
public:
    
    
    int grid_count(vector<vector<int>>&grid,int m,int n){
         if(m<0 || m>=grid.size() || n<0 || n>=grid[0].size())
            return 0;
        if(grid[m][n]==0)
            return 0;
        grid[m][n]=0;
        
      
return (1+ grid_count(grid,m-1,n)+grid_count(grid,m,n-1)+grid_count(grid,m+1,n)+grid_count(grid,m,n+1)) ;
    }
    
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        long long count=0;
        long long temp=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {   
                    temp=grid_count(grid,i,j);
                }
                count=max(count,temp);
            }
        }
        return count;
        
    }
};