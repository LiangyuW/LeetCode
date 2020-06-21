
// Maximum Depth of N-ary Tree

class Solution {
public:
    int maxDepth(Node* root) {
        
        if(root==NULL) return 0;
        int max=0;
        for(auto e:root->children){
            int depth=maxDepth(e);
            if(depth>max){
                max=depth;
            }
        }
     return max+1;   
    }
};



\\N-ary Tree Postorder Traversal

class Solution {
public:
    void postorder(Node*root, vector<int> &v){
        for(auto e:root->children){
            postorder(e, v);
        }
         v.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {
        vector<int>v;
        if(root==NULL) return v;
        postorder(root, v);
        return v;
    }
};
