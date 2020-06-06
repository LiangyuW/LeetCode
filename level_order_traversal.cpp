class Solution {
public:
    
  
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root==NULL){
            vector<vector<int>> E = {};
            return E;
        }
        
        queue<TreeNode*> V;
        V.push(root);
        vector<vector<int>> out(1000);
        vector<int> height;
        height.push_back(0);
        int i = 0;
        
        while(!V.empty()){
            TreeNode* N = V.front();
            int o = N->val;
            out[height[i]].push_back(o);
            //cout<<o<<"-"<<i<<" ";
            V.pop();
            
        
            if(N->left){
                V.push(N->left);
                height.push_back(height[i]+1);  
            }
            if(N->right){
                V.push(N->right);
                height.push_back(height[i]+1);
            }
            i++;    
        }
        
        while(out.back().size()==0){
            out.pop_back();
        }
        
        return out;
    }
};
