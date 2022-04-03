class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
       int n=nums.size(),break_point,temp;
        for(break_point=n-2;break_point>=0;break_point--)
        {
            if(nums[break_point]<nums[break_point+1])
                break;
        }
        if(break_point<0)
        {
            reverse(nums.begin(),nums.end());
        }else {
            for(temp=n-1;temp>break_point;temp--)
            {
                if(nums[temp]>nums[break_point])
                    break;
            }
            
            swap(nums[temp],nums[break_point]);
            reverse(nums.begin()+break_point+1,nums.end());
        }
        
        
    }
};