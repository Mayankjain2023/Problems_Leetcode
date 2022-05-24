class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currentMax=0;
        int globalMax=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            currentMax=max(nums[i],nums[i]+currentMax);
            // if(currentMax<0)
            // {
            //     currentMax=0;
            // }
            if(currentMax>globalMax)
            {
                globalMax=currentMax;
            }
            
        }
        return globalMax;
    }
};