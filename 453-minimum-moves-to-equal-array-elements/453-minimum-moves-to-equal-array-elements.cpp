class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int first=nums[0];
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            a+=nums[i]-first;
        }
        return a;
        
    }
};