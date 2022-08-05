class Solution {
public:
    vector<int>dp;
    
    int sum(vector<int>&nums,int target,int size){
        if(target==0) return 1;
        int ways=0;
        
        if(dp[target]!=-1) return dp[target];
        
        for(int i=0;i<size;i++){
            if(nums[i]<=target){
            ways+=sum(nums,target-nums[i],size);
            }
        }
        return dp[target]=ways;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        int size=nums.size();
        
            dp.resize(target+1,-1);
            return sum(nums,target,size);
    }
};