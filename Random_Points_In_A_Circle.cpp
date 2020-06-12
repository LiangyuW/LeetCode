

class Solution {

private:
    double rad;
    double x;
    double y;
    double a;
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_real_distribution<double> unif;

/*
  Uniform Distribution: p(x|a,b)=1/(b-a)
*/

public:   
    Solution(double radius, double x_center, double y_center)
        :rad(radius), x(x_center), y(y_center), gen(rd()), unif(0, 1) 
        {}
    
    vector<double> randPoint() {
    
        double a = 2*M_PI*unif(gen);
        double r = sqrt(unif(gen))*rad;

        double s = x+r*cos(a);
        double t = y+r*sin(a);
        
        return {s, t};
    }

    
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
