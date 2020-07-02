class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int j=0, max=0, zero=0;
        for(int i=0; i<A.size(); i++){
            if(A[i]==0) zero++;
            while(zero>K){
                if(A[j]==0){ 
                    zero--;
                }
                j++;
            }
            max=std::max(max, i-j+1);
        }
     return max;
    }
};
