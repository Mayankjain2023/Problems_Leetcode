class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int>arr(nums.begin(),nums.end());
    
        
        //int flag=1;
        
       
        sort(arr.begin(),arr.end());
        
        int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        
        while(start<n && nums[start]==arr[start])
        {
            start++;
        }
        
        while(end>start && nums[end]==arr[end])
        {
            end--;
        }
        
        
        return end-start+1;
        
    }
};