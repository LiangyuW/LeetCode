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
        
        if(root==nullptr) return {};
        
        deque<Node*> q;
        vector<vector<int>> v;
        q.push_back(root);
        
        int depth=0;
        
        while(!q.empty()){
            int size=q.size();
            depth++;
        
            vector<int>k;
            
            while(size-->0){
                Node*n=q.front();
                q.pop_front();
                k.push_back(n->val);
                for(auto e: n->children){
                    q.push_back(e);
                }
                
            }
            v.push_back(k);
        }
        
        
        return v;
    }
};

