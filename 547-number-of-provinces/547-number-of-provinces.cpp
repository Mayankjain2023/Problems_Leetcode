class Solution {
 private:
    
    void dfs(int i,vector<int>adjList[],int vis[]){
        
        vis[i]=1;
        
        for(auto node:adjList[i]){
            if(vis[node]!=1){
                dfs(node,adjList,vis);
            }
        }
    }
    
  public:
    
    
    int findCircleNum(vector<vector<int>>& adj) {
        
        int V=adj.size();
        
        vector<int>adjList[V];
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        
        int count=0;
        int vis[V];
        memset(vis,0,sizeof(vis));
        for(int i=0;i<V;i++){
            if(vis[i]!=1){
                count++;
                dfs(i,adjList,vis);
            }
        }
        return count;
    }
};