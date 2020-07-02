class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int max=0;
        int i=0, j=0;
        while(i<s.size()){
            if(st.count(s[i])==0){
                 st.insert(s[i]);
                 i++;
            }
            else {
                st.erase(s[j]);
                j++;
            }
           max=std::max(max, i-j);   
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
