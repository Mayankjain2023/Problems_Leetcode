class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& prerequisites) {
        
        vector<int>adj[num];
        
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        
        queue<int>q;
        vector<int>indegree(num,0);
        vector<int>topo;
        
        for(int i=0;i<num;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        for(int i=0;i<num;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            topo.push_back(node);
            
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                q.push(it);
                }     
            }
        }
        
        if(topo.size()==num) return topo;
        else return {};
        
    }
};