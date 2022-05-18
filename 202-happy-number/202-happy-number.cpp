class Solution {
public:
    
    int help(int n)
    {
        int ans=0;
        while(n>0)
        {
            int temp=n%10;
            ans+=(temp*temp);
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        
        int slow=n;
        int fast=n;
        
        do{
            slow=help(slow);
            fast=help(help(fast));
            
        }while(slow!=fast);
        return slow==1;
        
    }
};