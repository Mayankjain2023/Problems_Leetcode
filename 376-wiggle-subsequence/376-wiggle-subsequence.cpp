class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int count=0;
        if(nums.size()==1) return 1;
        
       int prev_count=nums[1]-nums[0];
        count=(prev_count!=0)?2:1;
        
            for(int i=2;i<nums.size();i++)
            {
                int curr_count=nums[i]-nums[i-1];
                if((curr_count>0 && prev_count<=0) || (curr_count<0 && prev_count>=0))
                {
                    count++;
                    prev_count=curr_count;
                }
            }
        
        return count;
    }
};