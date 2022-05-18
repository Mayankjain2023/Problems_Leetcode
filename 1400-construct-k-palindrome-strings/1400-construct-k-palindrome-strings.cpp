class Solution {
public:
    bool canConstruct(string s, int k) {
        
        if(s.size()<k) return false;
        
        map<int,int>mp;
        int num=0;
        for(auto a:s) mp[a]++;
        
        for(auto a:mp)
        {
            if(a.second%2!=0) num++;
        }
        
        return num<=k;
        
    }
};