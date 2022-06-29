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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        path(root,maxi);
        return maxi;
    }
    
    int path(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int left_path=max(0,path(root->left,maxi));
        int right_path=max(0,path(root->right,maxi));
        maxi=max(maxi,left_path+right_path+root->val);
        
        return max(left_path,right_path)+root->val;
    }
};