class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char,int>mp1;
       // unordered_map<char,int>mp2;
        
        for(auto i:s)
        {
            mp1[i]++;
        }
        
        for(auto j:t)
        {
            mp1[j]--;
        }
        int ans=0;
        for(auto i:mp1)
        {
            ans+=abs(i.second);
        }
        int res=ans;
        return res/2;
        
    }
};