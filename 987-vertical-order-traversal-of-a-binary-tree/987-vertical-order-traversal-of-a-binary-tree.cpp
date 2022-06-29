/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        
        queue<pair<TreeNode*,pair<int,int>>>ds;
        ds.push({root,{0,0}});
        while(!ds.empty())
        {
            auto p=ds.front();
            ds.pop();
            
            TreeNode* node=p.first;
            int x=p.second.first;
            int y=p.second.second;
            mp[x][y].insert(node->val);
            if(node->left)
            {
                ds.push({node->left,{x-1,y+1}});
            }
            if(node->right)
            {
                ds.push({node->right,{x+1,y+1}});
            }
            
        }
        
        vector<vector<int>>list;
        for(auto p:mp)
        {
            vector<int>temp;
            for(auto m:p.second)
            {
                temp.insert(temp.end(),m.second.begin(),m.second.end());
                
            }
            list.push_back(temp);
        }
        return list;
    }
};