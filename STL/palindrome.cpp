class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        
        for(int i=0, j=n-1; i<j; i++, j--){
            while(i<j && !isalnum(s[i])) {
                i++;

            }
            while(i<j && !isalnum(s[j])) {
                j--;
 
            }
            if(tolower(s[i])!=tolower(s[j])) {
                return false;
            }
        }
        return true;
    }
};


class Solution {
public:
    bool isPalindrome(string s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++; r--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
    
        while(l<r){
            if(s[l]!=s[r]){
                return (isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1));
            } 
            l++; r--;
            
        }
        return true;
    }
};
