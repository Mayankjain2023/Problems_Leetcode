class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>list;
        if(n==0) return list;
        if(n==1)
        {
            list.push_back({1});
            return list;
        }
        if(n==2)
        {
            list.push_back({1});
            list.push_back({1,1});
            return list;
        }
       
        if(n>=3)
        {
            list.push_back({1});
            list.push_back({1,1});
             int level=2;
                
            for(int i=2;i<=n-1;i++)
            {   
                vector<int>res;
                for(int j=0;j<=level;j++)
                {
                    if(j==0)
                    {
                        res.push_back(list[i-1][0]);
                    }
                    else if(j==level)
                    {
                        res.push_back(list[i-1][level-1]);
                    }
                    else
                    {
                        res.push_back(list[i-1][j-1]+list[i-1][j]);
                    }
                }
                level++;
                list.push_back(res);
            }
        }
        
        return list;
        
        
    }
};