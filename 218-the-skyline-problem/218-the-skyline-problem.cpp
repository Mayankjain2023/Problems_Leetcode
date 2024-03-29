class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
                vector<pair<int, int>> heights;
        int n = buildings.size();
        for(int i=0; i<n; i++){
            heights.push_back({buildings[i][0], -buildings[i][2]});
            heights.push_back({buildings[i][1], buildings[i][2]});
        }
        sort(heights.begin(), heights.end());
        multiset<int> pq;
        pq.insert(0);
        int prev = 0;
        vector<vector<int>> op;
        for(auto& [x, h]: heights){
            if (h<0){
                pq.insert(-h);
            }else{
                pq.erase(pq.find(h));
            }
            int cur = *pq.rbegin();
            if (cur != prev){
                op.push_back({x, cur});
                prev = cur;
            }
        }
        return op;

    }
};