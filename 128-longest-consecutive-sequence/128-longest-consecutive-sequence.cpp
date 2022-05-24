class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>hash;
        
        for(int i=0;i<nums.size();i++)
        {
            hash.insert(nums[i]);
        }
        
        int longestStreak=0;
        int currentStreak=0;
        for(int i=0;i<nums.size();i++)
        {
            if(!hash.count(nums[i]-1)){    
            int num=nums[i];
            currentStreak=1;
                while(hash.count(num+1))
                {
                    currentStreak++;
                    num++;
                }
            }
            longestStreak=max(longestStreak,currentStreak);
            
            
        }
        
        return longestStreak;
        
    }
};