class BrowserHistory {
    private:
    vector<string> forwards;
    vector<string> backward;
    string page;
    
    public:
    
    BrowserHistory(string homepage) {
        page=homepage;
        
    }
    
    void visit(string url) {
        backward.push_back(page);
        page=url;
        forwards.clear();
        

    }
    
    string back(int steps) {
        while(steps--){
            if(!backward.empty()){
            forwards.push_back(page);
            page=backward.back();
            backward.pop_back();
            }
        }
        return page;
    }
    
    string forward(int steps) {
        while(steps--){
            if(!forwards.empty()){
                backward.push_back(page);
                page=forwards.back();
                forwards.pop_back();
            }
        }
        return page;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();


/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
