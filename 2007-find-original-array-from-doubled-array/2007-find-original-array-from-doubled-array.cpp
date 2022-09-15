class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>original;
        int size=changed.size();
        if(size%2!=0) return original;
        
        map<int,int>mp;
        sort(changed.begin(),changed.end());
        for(int i=0;i<size;i++){
            mp[changed[i]]++;
        }
        
        
        for(int i=0;i<size;i++){
            if(mp[changed[i]]==0) continue;
            if(mp[changed[i]*2]==0) return {};
            original.push_back(changed[i]);
            mp[changed[i]]--;
            mp[changed[i]*2]--;
        }
        return original;
    }
};