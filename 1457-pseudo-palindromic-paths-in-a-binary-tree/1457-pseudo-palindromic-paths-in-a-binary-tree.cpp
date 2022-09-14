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
private:
    
    int ans=0;
    unordered_map<int,int>mp;
    
    void palindrome(TreeNode* root){
        if(root==NULL) return;
        
        mp[root->val]++;
        
        if(root->left==NULL && root->right==NULL){
            int temp=0;
            for(int i=0;i<=9;i++){
                if(mp[i]%2!=0){
                    temp++;
                }
            }
            
            if(temp<=1) ans++;
        }
        
        palindrome(root->left);
        palindrome(root->right);
        mp[root->val]--;
    }
    
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        palindrome(root);
        return ans;
        
    }
};