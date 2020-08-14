class FreqStack {
public:
    
   
    unordered_map<int, int>mp;
    map<int, stack<int>, greater<int>>st;
    FreqStack() {
        
    }
    
    void push(int x) {
        mp[x]++;
        st[mp[x]].push(x);
        
       
    }
    
    int pop() {
        stack<int>&v=st.begin()->second;
        
        int t=v.top();
        mp[t]--;
        
        
        v.pop();
        
        if(v.empty()){
            st.erase(st.begin());
        }
       
        return t;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
