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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        if(root==NULL) return v;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            double size=q.size();
            double sum=0;
            
           for(int i=0;i<size;i++){
               auto t=q.front();
               sum+=t->val;
               q.pop();
           
            
            if(t->left){
                q.push(t->left);
            }
            if(t->right){
                q.push(t->right);
            }
           }
            double avg=sum/size;
            v.push_back(avg);
        }
        return v;
        
    }
};