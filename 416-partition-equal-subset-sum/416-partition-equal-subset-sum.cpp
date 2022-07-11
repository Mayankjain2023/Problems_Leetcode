class Solution {
public:
    
    bool subsetSum(vector<int>nums,int size,int sum)
    {
        int dp[size+1][sum+1];
        
        for(int i=0;i<sum+1;i++)
        {
            dp[0][i]=0;
        }
        
        for(int i=0;i<size+1;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<size+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[size][sum];
            
    }
    
    
    
    bool canPartition(vector<int>& nums) {
        
        int size=nums.size();
        long long sum=0;
        
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
        }
        
        if(sum%2!=0) return false;
        else
        {
            int target=sum/2;
            return subsetSum(nums,size,target);
        }
    }
};