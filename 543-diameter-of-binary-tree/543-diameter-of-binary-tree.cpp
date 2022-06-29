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
     int maxi=0;
public:
   
    int dia(TreeNode* root)
    {
         if(root==NULL) return 0;
        int left_length=dia(root->left);
        int right_length=dia(root->right);
        maxi=max(maxi,left_length+right_length);
        return max(left_length,right_length)+1;    
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
       
        dia(root);
        return maxi;
        
    }
    
};