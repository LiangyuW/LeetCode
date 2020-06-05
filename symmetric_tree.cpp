
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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL || (!root->left&& !root->right)){
            return true;
        }
        
        queue<TreeNode*> L;
        queue<TreeNode*> R;
        L.push(root);
        R.push(root);
        
        while(!L.empty() && !R.empty()){
            TreeNode* x = L.front();
            TreeNode* y = R.front();
            
            cout << x->val << " " << y->val <<endl;
  
            
            if(x->val != y->val){
                return false;
            }
    
            L.pop();
            R.pop();
                if(x->val!=-2){
                if(x->left||x->right){
                if(x->left){
                    L.push(x->left);
                } else {
                    TreeNode* n = new TreeNode(-1);
                    L.push(n);
                }
                if(x->right){
                    L.push(x->right);
                } else {
                    TreeNode* n = new TreeNode(-1);
                    L.push(n);
                }
                } else{
                    TreeNode* n = new TreeNode(-2);
                    L.push(n);
                }
                }
            
            
            
                if(x->val!=-2){
                if(y->left||y->right) {
                if(y->right){
                    R.push(y->right);
                } else {
                    TreeNode* n = new TreeNode(-1);
                    R.push(n);
                }
                if(y->left){
                    R.push(y->left);
                } else {
                    TreeNode* n = new TreeNode(-1);
                    R.push(n);
                }
                } else{
                    TreeNode* n = new TreeNode(-2);
                    R.push(n);
                }
                }
        }
        
        if(!L.empty()||!R.empty()){
            return false;
        }
        return true;
    }
};
