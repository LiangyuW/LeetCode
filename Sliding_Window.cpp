class Solution {
public:
    int maxVowels(string s, int k) {
        
        unordered_set<char> st{'a','e','i','o','u'};
        int count=0; int max=0;
        for(int i=0; i<k; i++){
            if(st.count(s[i])!=0){
                max++;
            }
        }
        count=max;
        
        for(int i=k; i<s.size(); i++){
            if(st.count(s[i])!=0) count++;
            if(st.count(s[i-k])!=0) count--;
            if(count>max){
                max=count;
            }
        }
        
        return max;
    }
};
