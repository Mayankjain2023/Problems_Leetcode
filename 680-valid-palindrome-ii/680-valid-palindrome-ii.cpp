class Solution {
public:
    bool validPalindrome(string s) {
        int start=0;
       int end=s.length()-1;
        int count=0;
        
        while(start<end)
        {
            if(s[start]==s[end])
            {
                
                start++;
                end--;
            }
            else
            {
                count++;
                start++;
            }
            if(count>1)
            {
                break;
            }
        }
        
        start=0;
        end=s.length()-1;
        int count1=0;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
                
            }
            else
            {
                count1++;
                end--;
            }
            if(count1>1)
            {
                break;
            }
        }
        
        if(count ==1 || count1==1)
        {
            return true;
        }
        else if(count==0 || count1==0)
        {
            return true;
        }
        return false;
        
        
    }
};