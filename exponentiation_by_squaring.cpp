class Solution {
public:
    double myPow(double x, int n) {
        double r=1;
        double m = n;
        if(m==0||x==1){
            return 1;
        }
        if(m<0){
            x=1/x;
            m=-m;
        }
       
        while(m>1){
            if(fmod(m,2)==0){
                x=x*x;
                m=m/2;
            } else{
                r=r*x;
                x=x*x;
                m=(m-1)/2;
            }
        }
        return r*x;
    }
};
