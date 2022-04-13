class Solution {
public:
    
    int maxiSum(vector<int>&nums)
    {
        int sum=0;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        
        return maxi;
    }
    
    
    int miniSum(vector<int>&nums)
    {
        int sum=0;
        int mini=INT_MAX;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mini=min(mini,sum);
            if(sum>0) sum=0;
            
        }
        return mini;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
       // int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        int maximumSum=maxiSum(nums);
        int minimumSum=miniSum(nums);
        
        if(maximumSum>0)
        {
            return max(maximumSum,sum-minimumSum);    
        }
        return maximumSum;
        
    }
};