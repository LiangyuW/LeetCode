class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
       priority_queue<long, vector<long>, greater<long>>q;
        unordered_set<long>st;
        
        q.push(1);
        st.insert(1);
        
        int t=0;
        long out=-1;
    
        while(!q.empty()&&t<INT_MAX){
            long k=q.top();
            q.pop();
            t++;
            if(t==n) {
                out=k;
                break;
            }
            
            for(auto p: primes){
                if(st.count(p*k)==0){
                    q.push(p*k);
                    st.insert(p*k);
                }
            }
           
        }
        return out;  
    }
};
