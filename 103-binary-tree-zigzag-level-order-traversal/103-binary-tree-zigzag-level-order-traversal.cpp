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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        vector<vector<int>>result;
         if(root==NULL)
            return result;
        
        queue<TreeNode*>q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>ds(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* front=q.front();
                q.pop();
                
                int index=(leftToRight)?i:(size-i-1);
                
                ds[index]=front->val;
                if(front->left!=NULL) {
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
            }
            leftToRight=!leftToRight;
            result.push_back(ds);
        }
        return result;
        
    }
};