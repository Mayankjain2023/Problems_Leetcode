class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char,int>mp;
        
        for(int i=0;i<jewels.size();i++)
        {
            mp[jewels[i]]++;
        }
        int count=0;
        
        for(int i=0;i<stones.size();i++)
        {
            if(mp.find(stones[i])!=mp.end())
            {
                count++;
            }
        }
        
        return count;
        
    }
};