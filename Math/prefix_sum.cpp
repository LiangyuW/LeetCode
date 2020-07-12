class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int N=1000000007;
        
        vector<int>sums;

 
        for(int i = 0;i < n;i++) {
            int sum = 0;
            for (int j = i;j < n;j++) {
                sum += nums[j];
                sums.push_back(sum);
            }
           
        }
        
        sort(sums.begin(), sums.end());
        
        int sum=0; 
        for(int i=left-1; i<=right-1; i++){
            sum=(sum+sums[i])%N;
        }
        
        return sum;
    }
};




class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int N=1000000007;
        vector<int>prefixsums;
        vector<int>sums;
        prefixsums.push_back(0);
        int sum=0;
        for(int i=0; i<n; i++){
            prefixsums.push_back(sum+=nums[i]);
            
            for(int j=0; j<prefixsums.size()-1; j++){
                sums.push_back(sum-prefixsums[j]);
            }
        }
        
        sort(sums.begin(), sums.end());
        
        sum=0; 
        for(int i=left-1; i<=right-1; i++){
            sum=(sum+sums[i])%N;
        }
        
        return sum;
    }
};
