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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        
        TreeNode* root= build_tree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
    
    
    TreeNode* build_tree(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,map<int,int>&mp)
    {
        if(prestart>preend || instart>inend) return NULL;
        
        
        TreeNode* root= new TreeNode (preorder[prestart]);
            
            int inorderRoot=mp[preorder[prestart]];
            int root_left_index=inorderRoot-instart;
        
root->left=
            build_tree(preorder,prestart+1,prestart+root_left_index,inorder,instart,inorderRoot-                1,mp);
        
root->right=build_tree(preorder,prestart+root_left_index+1,preend,inorder,inorderRoot+1,inend,mp);
        
        return root;
        
    }
};