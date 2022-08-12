/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
   
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return root;
       int current_value=root->val;
        
        if(current_value>p->val && current_value>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(current_value<p->val&& current_value<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else {
            return root;
        }
    }
};