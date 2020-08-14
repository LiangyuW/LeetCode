class TwoSum {
public:
    multiset<int>st;
    /** Initialize your data structure here. */
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        st.insert(number);
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        if(st.size()==0) return false;
        
        auto l=st.begin();
        auto r=--st.end();
      
        while(l!=r){
            
            if(*l+*r<value){
                l++;
            }
            else if(*l+*r>value){
                r--;        
            }
            else{
                return true;
            }
        }
        
        return false;
    }
};
static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
