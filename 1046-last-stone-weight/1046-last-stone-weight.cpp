class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x,y=0;
        int n=stones.size();
        if(n==0) return 0;
        if(n==1) return stones[0];
        sort(stones.begin(),stones.end());
        priority_queue<int>pathar;
        
        for(int i=0;i<n;i++)
        {
            pathar.push(stones[i]);
        }
        
        while(pathar.size()>1)
        {
            int x=pathar.top();
            pathar.pop();
            int y=pathar.top();
            pathar.pop();
            
            if((x-y)!=0)
            {
                pathar.push((x-y));
            }
            
            
        }
        if(pathar.size()==0)
        {
            return 0;
        }
        
        return pathar.top();
    }
};