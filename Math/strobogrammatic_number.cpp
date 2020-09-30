class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char, char> mp{{'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};
        int i=0, j=num.size()-1;
        
        while(i<=j){
            if(mp[num[i]]!=num[j]) return false; 
            i++; j--;
        }  
        return true;
    }
};
