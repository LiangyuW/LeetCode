class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int solution=0;
            
        for(int i=0; i<n-1; i++){
            int l=i+1;
            int r=n-1;
            int x=nums[i];
            
            while(l<r){
                int sum=x+nums[l]+nums[r];
                if(sum>=target){
                    r--;
                } 
                else{
                    solution+=(r-l);
                    l++;
                  
                }
            }
            
        }
        return solution;
    }
};



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int dif=INT_MAX;
        int out=INT_MAX;
        for(int i=0; i<n-1; i++){
            int l=i+1;
            int r=n-1;
            int x=nums[i];
            while(l<r){
                int k=x+nums[l]+nums[r];
                if(k>target){
                    if(k-target<dif){
                        dif=k-target;
                        out=k;
                    }
                    r--;
                }
                else if(k<target){
                    if(target-k<dif){
                        dif=target-k;
                        out=k;
                    }
                    l++;
                } else{
                    return k;
                }
            }
        }
        return out;
    }
};
