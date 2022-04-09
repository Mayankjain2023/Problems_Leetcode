class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_h;
        
        for(auto it:mp)
        {
            min_h.push({it.second,it.first});
            if(min_h.size()>k)
            {
                min_h.pop();
            }
        }
        
        vector<int>res;
        
        for(int i=0;i<k;i++)
        {   
            int a=min_h.top().second;
            res.push_back(a);
            min_h.pop();
        }
        return res;
        
    }
};