class NumArray {
public:
    
    vector<int>tree;
    int n;
    NumArray(vector<int>& nums) {
        n=nums.size();
        tree.resize(2*n);
        for(int i=0; i<n; i++){
            tree[n+i]=nums[i];
        }
        
        for(int i=n-1; i>0; i--){
            tree[i]=tree[2*i]+tree[2*i+1];
        }
    }
    
    void update(int i, int val) {
        tree[n+i]=val;
       
        for(int k=n+i; k>1; k/=2){
            tree[k/2]=tree[k]+tree[k^1];
        }
    }
    
    int sumRange(int i, int j) {
        int sum=0; 
        
        for(i+=n, j+=n; i<=j; i/=2, j/=2){
            if(i%2==1) sum+=tree[i++];
            if(j%2==0) sum+=tree[j--];
        }
        
       
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
