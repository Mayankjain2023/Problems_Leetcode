class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mp;
        
        
        
        vector<int>num;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {   
                num.push_back(mp[target-nums[i]]);
                num.push_back(i);
                return num;
            }else
            {
                mp[nums[i]]=i;
            }
        }
        
        return num;
    }
};