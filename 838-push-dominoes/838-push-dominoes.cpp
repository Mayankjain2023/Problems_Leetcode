class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        char prev='.';
        int count=1;
        vector<int>left(n,0),right(n,0);
        for(int i=0;i<n;i++){
            if(dominoes[i]=='R'){
                prev='R';
                count=1;
                continue;
                
            }else if(dominoes[i]=='L'){
                prev='L';
                
            }else if(dominoes[i]=='.' && prev=='R'){
                right[i]=count;
                count++;
            }
        }
        prev='.';
        count=1;
        for(int i=n-1;i>=0;i--){
            if(dominoes[i]=='L'){
                prev='L';
                count=1;
                continue;
            }else if(dominoes[i]=='R'){
                prev='R';
            }else if(dominoes[i]=='.' &&prev=='L'){
                left[i]=count;
                count++;
                
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(left[i]==0 && right[i]==0){
                ans+=dominoes[i];
                
            }else if(left[i]==0){
                ans+='R';
            }else if(right[i]==0){
                ans+='L';
                
            }else if(left[i]==right[i]){
                ans+='.';
            }else if(left[i]>right[i]){
                ans+='R';
            }else if(left[i]<right[i]){
                ans+='L';
            }
        }
        return ans;
    }
};