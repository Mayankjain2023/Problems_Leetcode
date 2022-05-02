class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>t1;
        stack<char>s1;
        
        for(int i=0;i<s.length();i++)
        {   
            if(s[i]=='#' && !t1.empty())
            {
                t1.pop();
            }
            else if(s[i]!='#')
                t1.push(s[i]);
        }
        
         for(int i=0;i<t.length();i++)
        {   
            if(t[i]=='#' and !s1.empty())
            {
                s1.pop();
            }
            else if(t[i]!='#')
                s1.push(t[i]);
        }
        
        if(s1.size()!=t1.size()) return false;
        
        while(s1.size() && t1.size())
        {
            if(s1.top()!=t1.top())
                return false;
            s1.pop();
            t1.pop();
        }
        
        return true;
    }
};