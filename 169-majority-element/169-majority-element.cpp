class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int majority=nums[0];
        int count=1;
        for(int i=0;i<n;i++)
        {
            
            if(majority==nums[i])
            {
                count++;
            }
            else
            {
                count--;
                if(count==0)
                 {
                    majority=nums[i];
                    count=1;
                 }
                
            }
        }
        return majority;
        
    }
};