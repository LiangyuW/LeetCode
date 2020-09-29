class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n=S.size();
        int last=-1;
        vector<int>dist(n, INT_MAX);
        
        for(int i=0; i<n; i++){
            if(S[i]==C) {
                dist[i]=0;
                last=i;
            }
            else{
                if(last!=-1) dist[i]=i-last;
            }   
        }
        
        last=-1;
        for(int i=n-1; i>=0; i--){
            if(S[i]==C) {
                dist[i]=0;
                last=i;
            }
            else{
                if(last!=-1) dist[i]=min(dist[i], last-i); 
            }
        }
        return dist;
        
    }
};
