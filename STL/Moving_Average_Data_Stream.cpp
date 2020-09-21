class MovingAverage {
public:
   
    list<int>ls;
    double sum=0;
    int window;
     /** Initialize your data structure here. */
    MovingAverage(int size) {
         window=size; 
    }
    
    double next(int val) {
        if(ls.size()==window) {
            sum-=ls.front();
            ls.pop_front();
        }
        
        ls.push_back(val);
        sum+=val;
        
        return sum/ls.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
