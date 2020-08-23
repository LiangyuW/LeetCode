class Solution {
public:
    bool ok(vector<int>& stations, int K, double D){
        int n=stations.size();
        int new_stations=0;
        for(int i=1; i<n; i++){
            new_stations+=(stations[i]-stations[i-1])/D;
            }
        
        return new_stations<=K;
    }
    
    
    double minmaxGasDist(vector<int>& stations, int K) {
        double l=0; double r=stations.back()-stations[0];
        
        while(l<r){
            double m=l+(r-l)/2.0;
            if(ok(stations, K, m)){
                r=m-1e-6;
            } else{
                l=m+1e-6;
            }
        }
        
        return r;
    }
};
