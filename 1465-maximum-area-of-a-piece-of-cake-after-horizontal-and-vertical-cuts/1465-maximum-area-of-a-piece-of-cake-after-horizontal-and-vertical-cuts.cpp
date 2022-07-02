class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int maxH=horizontalCuts[0];
        int maxV=verticalCuts[0];
        
      
        
        
        for(int i=1;i<horizontalCuts.size();i++)
        {
            maxH=max(maxH,horizontalCuts[i]-horizontalCuts[i-1]);
            
        }
        

        for(int j=1;j<verticalCuts.size();j++)
        {
            maxV=max(maxV,verticalCuts[j]-verticalCuts[j-1]);
        }
        
        return (1LL*maxV*maxH)%1000000007;
        
    }
};