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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        vector<int>v;
        
        TreeNode*p=root1;
        TreeNode*q=root2;
        while(!st1.empty()||!st2.empty()||p||q){
            while(p){
                st1.push(p);
                p=p->left;
            }
            while(q){
                st2.push(q);
                q=q->left;
            }
            
            if(st2.empty()||!st1.empty() && st1.top()->val<=st2.top()->val){
                p=st1.top();
                st1.pop();
                v.push_back(p->val);
                p=p->right;
            } else{
                q=st2.top();
                st2.pop();
                v.push_back(q->val);
                q=q->right;
            }

        }
       
        
        return v;
    }
};
