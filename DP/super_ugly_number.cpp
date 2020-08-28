class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ugly(n+1, 0);
       
        ugly[0]=1;
        int a=0, b=0, c=0;
        
        for(int i=1; i<=n; i++){
                ugly[i]=min({ugly[a]*2, ugly[b]*3, ugly[c]*5});

                if(ugly[i]==ugly[a]*2) a++;
                if(ugly[i]==ugly[b]*3) b++;
                if(ugly[i]==ugly[c]*5) c++;
       
        }
        
       // for(auto e: ugly) cout<<e<<" ";
        
        return ugly[n-1];   
    }
};
