class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int j=0;
        int i=0;
        while(j<nums.size())
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
                i++;
            }
            else
            {
                j++;
            }
        }
    
        
    }
};