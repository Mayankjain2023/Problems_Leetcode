class Solution {
    
    vector<int>ans;
    void dfs(int len,int &k,long long num,int dig)
    {
        if(len==0){
            ans.push_back(num);
            return;
        }
        
        for(int i=0;i<10;i++){
            
            if(abs(i-dig)==k){
                
            dfs(len-1,k,num*10+i,i);
            
            }
        }       
    }
public:
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        for(int i=1;i<=9;i++){
            dfs(n-1,k,i,i);
        }
        
        return ans;
    }
};