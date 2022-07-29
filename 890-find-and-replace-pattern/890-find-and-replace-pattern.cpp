class Solution {
public:
    
    string getMePattern(string pattern){
        string ans;
        int j=0;
        
        map<char,char>mp;
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])==mp.end()){
                mp[pattern[i]]='a'+j;
                j++;
            }
            ans.push_back(mp[pattern[i]]);
            
            
            
        }
        return ans;
    }
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        string patt=getMePattern(pattern);
        vector<string>ans;
        
        for(int i=0;i<words.size();i++){
            string p=getMePattern(words[i]);
            if(p==patt){
                ans.push_back(words[i]);
            }
        
    }
        
        return ans;
    }
};