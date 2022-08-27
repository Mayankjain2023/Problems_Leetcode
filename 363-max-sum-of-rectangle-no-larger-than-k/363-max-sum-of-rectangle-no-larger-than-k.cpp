class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int res=INT_MIN;
        int col=matrix[0].size();
        int row=matrix.size();
        
        for(int left=0;left<col;left++){
            vector<int>sum(row);
            
            for(int right=left;right<col;right++){
                for(int i=0;i<row;i++){
                    sum[i]+=matrix[i][right];
                }
                set<int>s={0};
                int cum_sum=0;
                
                for(auto sums:sum){
                    cum_sum+=sums;
                    auto it=s.lower_bound(cum_sum-k);
                    if(it!=end(s)){
                        res=max(res,cum_sum-*it);
                    }
                    s.insert(cum_sum);
                }
            }
        }
        return res;
        
    }
};