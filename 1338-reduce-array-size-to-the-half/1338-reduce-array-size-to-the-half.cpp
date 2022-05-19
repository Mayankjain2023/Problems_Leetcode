class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        
        int n=arr.size()/2;
        
        
        sort(arr.begin(),arr.end());
        
        unordered_map<int,int>map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        
       
        vector<int>vec;
        
        for(auto a:map)
        {
            vec.push_back(a.second);
        }
        
        sort(vec.begin(),vec.end());
        int count=0;
        int sum=0;
        while(sum<n)
        {
            sum+=vec.back();
            vec.pop_back();
            count++;
        }
        
        return count;
    }
};