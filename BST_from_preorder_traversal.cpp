class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0) return nullptr;
        
        TreeNode* root = new TreeNode(preorder[0]);
        vector<int>left;
        vector<int>right;

        
        
        for(auto i=1; i<preorder.size(); i++){
           
            if(preorder[i]<root->val) {
                left.push_back(preorder[i]);
            }
            else if(preorder[i]>root->val){
                right.push_back(preorder[i]);
            }
        }
        
        
        
        root->left = bstFromPreorder(left);
        root->right= bstFromPreorder(right);
            
        return root;
    }
};
