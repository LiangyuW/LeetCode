class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root==nullptr) return {};
        
        deque<TreeNode*> q;
        q.push_back(root);
        
        vector<vector<int>> v;
        int depth=0;
        
        while(!q.empty()){
            int size=q.size();
            
            vector<int>k(size);
           
            for(int i=0; i<size; i++){
                TreeNode*n=q.front();
                q.pop_front();
                
                if(depth&1){
                    k[size-i-1]=n->val; 
                } else{
                    k[i]=n->val;
                }
                
                if(n->left) q.push_back(n->left);
                if(n->right) q.push_back(n->right);
            }
            v.push_back(k);
            depth++; 
        }
        return v;
    }
};

static const auto speedup = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
};
