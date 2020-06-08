

class Solution {
public:
      
    // i<sqrt(n) <=> i*i<=n
        
    int countPrimes(int n) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int count = 0;
        bool prime[n+1];
        memset(prime, true, sizeof(prime));
        prime[0]= false;
        if(n>=1){
            prime[1] =false;
        }
        for(int i=2; i*i<=n; i++){
            if(prime[i]){
                for(int j = i*i; j<=n; j+=i){
                    prime[j] = false;
                }
            }
        }
        for(int i = 0; i<n; i++) {
            if(prime[i]) {count++; }
        }
    
        return count;
    }
};
