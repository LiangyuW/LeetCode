class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        for(int i=0, j=0; i<A.size(); i++){
            if(A[i]%2==0){
                swap(A[i], A[j]);
                j++;
            } 
        }
        return A;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
