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
    vector<int>ds;
public:
    
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        function(root,level);
        return ds;
    }
    
    void function(TreeNode* root,int level)
    {
    
        
        if(root==NULL) return;
            
        if(level==ds.size())
        {
            ds.push_back(root->val);
        }
        
        function(root->right,level+1);
        function(root->left,level+1);
        
    
    }
    
};