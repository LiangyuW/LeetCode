class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(root==NULL){
            return false;
        }
        
        else{
            
            int subsum=sum-root->val;
            
            if(subsum==0&&root->left==NULL&&root->right==NULL){
                return true;
            }
            
            bool ansl;
            bool ansr;
            if(root->left){
                ansl=hasPathSum(root->left, subsum);
            }
            if(root->right){
                ansr=hasPathSum(root->right, subsum);
            }
            return ansl||ansr; 
        }
    }
};


static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
