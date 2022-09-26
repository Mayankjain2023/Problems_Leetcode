class Solution {
public:
     int u[26];
        int find(int x){
            return u[x]==x?x:(u[x]=find(u[x]));
            
        }
        
    bool equationsPossible(vector<string>& equations) {
       
        for(int i=0;i<26;i++){
            u[i]=i;
        }
        
        for(auto e:equations){
            if(e[1]=='=') 
                u[find(e[0]-'a')]=find(e[3]-'a');
        }
        
        for(auto e:equations){
            if(e[1]=='!' && find(e[0]-'a')==find(e[3]-'a')){
                return false;
            }
        }
        return true;
    }
};