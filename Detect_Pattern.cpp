class Solution {
public:
    bool patterns(vector<int>& arr, int &offset, int &pattern_length, int &k){
        
        for(int i=1; i<k; i++){
            for(int j=0; j<pattern_length; j++){
                if(arr[offset+i*pattern_length+j]!=arr[offset+j]) return false;
            }
        }
        return true;
    }
    
    
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n=arr.size();
        if(n<m*k) return false;
        for(int i=0; i+m*k<=n; i++){                   
            if(patterns(arr, i, m, k)) return true;
        }
        return false;
    }
};
