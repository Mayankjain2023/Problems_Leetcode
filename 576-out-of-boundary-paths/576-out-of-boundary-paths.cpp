class Solution {
public:
    
    int dp[55][55][55];
   
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
       memset(dp,-1,sizeof(dp));
        return max_paths(m,n,maxMove,startRow,startColumn);
        
    }
    
    int max_paths(int m,int n,int maxMove,int startRow,int startColumn)
    {
         if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n)
            return 1;
        if(maxMove<=0) return 0;
        long long int mod=1000000007;
        if(dp[startRow][startColumn][maxMove]!=-1) return dp[startRow][startColumn][maxMove];
        
        int left=max_paths(m,n,maxMove-1,startRow-1,startColumn);
        int right=max_paths(m,n,maxMove-1,startRow,startColumn-1);
        int top=max_paths(m,n,maxMove-1,startRow+1,startColumn);
        int bottom=max_paths(m,n,maxMove-1,startRow,startColumn+1);
        
        return dp[startRow][startColumn][maxMove]= (left%mod+right%mod+top%mod+bottom%mod)%mod;
    }
  
};