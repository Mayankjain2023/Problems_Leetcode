class Solution {
public:
    
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
       int n=cost.size();
        vector<int>dp(n+1);
        if(n==0) dp[0]=cost[0];
        if(n==1) dp[1]=cost[1];
        for(int i=2;i<=n;i++)
        {
            int onejump=dp[i-1]+cost[i-1];
            int twojump=dp[i-2]+cost[i-2];
            dp[i]=min(onejump,twojump);
        }
       return dp[n]; 
    }
};