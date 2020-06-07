class Solution {
public:
    int minDepth(TreeNode* root) {
        int ldepth = 1;
        int rdepth = 1;
        if(root==NULL){
            return 0;
        }
        if(!root->left){
            rdepth+=minDepth(root->right);
            return rdepth;
        }
        if(!root->right){
            ldepth+=minDepth(root->left);
            return ldepth;
        }
        if(root->left){
            ldepth+=minDepth(root->left);
        }
        if(root->right){
            rdepth+=minDepth(root->right);
        }
        cout<<ldepth<<" "<<rdepth<<endl;
        return min(ldepth, rdepth);
    }
};
