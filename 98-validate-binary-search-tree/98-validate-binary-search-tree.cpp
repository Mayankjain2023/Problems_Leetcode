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
    
    
    
    bool validBST(TreeNode* root,long minimum_value,long maximum_value){
        if(root==NULL) return true;
        
        if(root->val>minimum_value && root->val<maximum_value){
            return validBST(root->left,minimum_value,root->val) && validBST(root->right,root->val,maximum_value);
        }
        else{
            return false;
        }
    }
    
    bool isValidBST(TreeNode* root) {
       bool result=validBST(root,LONG_MIN,LONG_MAX);
        return result;
    }
};