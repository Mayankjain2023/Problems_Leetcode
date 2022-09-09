class Solution {
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0]) return a[0]>b[0];
        return a[1]<b[1];
    }
    
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(),properties.end(),cmp);
        int count=0;
        int maxAttack=INT_MIN;
       for(auto it: properties){
           if(maxAttack>it[1]) count++;
           else maxAttack=it[1];
       }    
        return count;
    }
};