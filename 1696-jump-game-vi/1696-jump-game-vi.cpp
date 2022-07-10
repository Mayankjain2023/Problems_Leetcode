class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>dp(n,INT_MIN);
        dp[0]=nums[0];
        priority_queue<pair<int,int>>pq;
        pq.push({dp[0],0});
        for(int i=1;i<n;i++)
        {
            while(pq.size() && i-pq.top().second>k)
            {
                pq.pop();
            }
            auto p=pq.top();
            dp[i]=max(dp[i],nums[i]+dp[p.second]);
            pq.push({dp[i],i});
        }
        
        return dp[n-1];
        
    }
};