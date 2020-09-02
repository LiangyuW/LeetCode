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
    int findSecondMinimumValue(TreeNode* root) {
        stack<TreeNode*>st;
        if(root==nullptr) return -1;
        
        TreeNode*p=root;
        int rootval=root->val;
        long smallest=LONG_MAX;
        while(p||!st.empty()){
            while(p){
                st.push(p);
                p=p->left;
            }
            p=st.top();
            st.pop();
            if(p->val<smallest && p->val!=rootval) smallest=p->val;
            p=p->right;
            
        }
        cout<<smallest;
        return smallest>root->val&&smallest!=LONG_MAX? (int)smallest:-1;
    }
};
