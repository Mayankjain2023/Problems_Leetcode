class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        int i=0;
        int j=1;
        while(i<colors.size() && j<colors.size()){
            if(colors[i]==colors[j])
            {
                if(neededTime[i]<neededTime[j])
                {
                    ans+=neededTime[i];
                    i=j;
                    j++;
                    
                }
                else{
                    ans+=neededTime[j];
                   // i++;
                    j++;
                    
                }
            }
                else{
                
                i=j;
                j++;
            } 
        }
        return ans;
    }
};