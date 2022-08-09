#define mod 1000000007;

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int n=arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,long>mp;
        mp[arr[0]]=1;
        
        
        for(int i=1;i<n;i++){
            long count=1;
            for(auto j:mp){
                int first=j.first;
                
                if(arr[i]%first==0 && mp.find(arr[i]/first)!=mp.end()){
                    count+=mp[first]*mp[arr[i]/first];
                }
            }
            mp[arr[i]]=count;
        }
        
        
        int Btree=0;
        for(auto i:mp){
            Btree=(Btree+i.second)%mod;
        }
        return Btree;
    }
};