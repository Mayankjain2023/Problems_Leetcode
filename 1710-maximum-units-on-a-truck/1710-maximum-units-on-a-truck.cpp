class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res=0;
        int currBatch=0;
        
        sort(boxTypes.begin(),boxTypes.end(),[](auto &a,auto &b){ return a[1]>b[1];});
        
        for(auto it:boxTypes)
        {
            currBatch=min(it[0],truckSize);
            truckSize=truckSize-currBatch;
            res+=currBatch*it[1];
            if(truckSize==0) break;
        }
        return res;
        
        
    }
};