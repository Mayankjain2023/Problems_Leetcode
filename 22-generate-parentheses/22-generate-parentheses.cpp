class Solution {
public:
    
    vector<string>sol;
    void generate(string &s,int start,int end)
    {
        
        if(start==0 && end==0)
        {
            sol.push_back(s);
            return;
        }
        if(start>0)
        {
            s.push_back('(');
            generate(s,start-1,end);
            s.pop_back();
        }
        if(start<end && end>0)
        {
            s.push_back(')');
            generate(s,start,end-1);
            s.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        
        string s="";
        generate(s,n,n);
        return sol;
        
        
    }
};