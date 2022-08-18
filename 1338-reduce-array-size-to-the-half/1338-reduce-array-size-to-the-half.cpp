class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int ans=0;
        int set_size=0;
        
        unordered_map<int,int>freq_set;
        
        int size=arr.size();
        for(int i=0;i<size;i++){
            freq_set[arr[i]]++;
        }
        
        vector<int>v;
        for(auto x:freq_set){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        
        if(v.size()==1) return 1;
        
        for(int i=v.size()-1;i>=0;i--){
            if(ans>=size/2){
                return set_size;
            }
            else{
                set_size++;
                ans=ans+v[i];
            }
        }
        return set_size;
    }
};