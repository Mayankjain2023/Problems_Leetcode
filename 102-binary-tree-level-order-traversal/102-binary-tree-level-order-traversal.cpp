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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>result= BFS(root);
        return result;
       
           
    }
    
    vector<vector<int>>BFS(TreeNode* root)
    {
        vector<vector<int>>result;
        if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
           vector<int>res;
            int size=q.size();
            
            for(int i=0;i<size;i++)
            {
                
                 TreeNode* a = q.front();
                    q.pop();
                if(a->left!=NULL) q.push(a->left);
                if(a->right!=NULL) q.push(a->right);
                res.push_back(a->val);
                
            }
            result.push_back(res);
        }
        return result;
    }
    
};