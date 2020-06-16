
// https://leetcode.com/problems/backspace-string-compare/submissions/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a="";
        string b="";
        for(auto c:S) c=='#'? (a.size()!=0? a.pop_back():void()) : a.push_back(c);
        for(auto c:T) c=='#'? (b.size()!=0? b.pop_back():void()) : b.push_back(c);
        return a==b;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();

