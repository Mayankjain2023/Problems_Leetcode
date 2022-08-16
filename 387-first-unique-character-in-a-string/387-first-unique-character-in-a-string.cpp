class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char,int>mp1;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        
        map<char,int>mp2;
        for(int i=0;i<s.size();i++){
            mp2[s[i]]=i;
        }
        
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]]==1){
                return mp2[s[i]];
            }
        }
        return -1;
    }
};