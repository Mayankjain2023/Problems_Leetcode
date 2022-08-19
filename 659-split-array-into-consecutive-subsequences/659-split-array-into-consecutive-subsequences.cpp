class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==0) continue;
            
            if(mp[nums[i]]>0){
                freq[nums[i]]--;
                mp[nums[i]]--;
                
                mp[nums[i]+1]++;
            }
            else if(freq[nums[i]]>0 && freq[nums[i]+1]>0 && freq[nums[i]+2]>0){
                freq[nums[i]]--;
                freq[nums[i]+1]--;
                freq[nums[i]+2]--;
                mp[nums[i]+3]++;
            }
            else{
                
                     return false;
            }
        
                  
        }
            return true;
        
    }
};