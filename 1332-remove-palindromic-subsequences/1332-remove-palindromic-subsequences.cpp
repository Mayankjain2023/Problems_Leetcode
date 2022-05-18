class Solution {
public:
    int removePalindromeSub(string s) {
        
        if(s.length()==0) return 0;
        
        int i=0;
        int j=s.length()-1;
        for(int i=0;i<(s.length()-1)/2;i++)
        {
            if(s[i]!=s[j]) return 2;
            else
                j--;
                
        }
        return 1;
        
    }
};