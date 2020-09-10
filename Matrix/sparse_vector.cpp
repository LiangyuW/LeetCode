class SparseVector {
public:
    unordered_map<int, int>v;
    
    SparseVector(vector<int> &nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]) v[i]=nums[i];}    
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int product=0;
        
        unordered_map<int, int>&w=vec.v;
        
        if(w.size()>v.size()) swap(v, w);
        
        for(auto &e: v){
            if(w[e.first]) product+=w[e.first]*e.second; }
        return product;
        
    }
};


static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();

