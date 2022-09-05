/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>>v;
        if(root==NULL) return v;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            v.push_back({});
            
            while(size--){
                Node* node=q.front();
                q.pop();
                v.back().push_back(node->val);
                
                for(auto it:node->children)
                {
                    q.push(it);
                }
            }
            
        }
        
        return v;
        
    }
};