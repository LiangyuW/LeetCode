class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= INT_MAX;
        int max=0;

        for(auto e:prices){
           if(e<min){
               min=e;
           } else if(e-min>max){
               max=e-min;
           }
        }
        return max;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
