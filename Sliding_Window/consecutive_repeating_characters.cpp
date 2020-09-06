class Solution {
public:
    string modifyString(string s) {
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='?') 
                for(char j='a'; j<='z'; j++){ 
                    if(i>0 && s[i-1]==j) continue;
                    if(i<s.size() && s[i+1]==j) continue;
                    s[i]=j;
                    break;
                }
        }
        return s;
    }
};

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
     vector<vector<int>>v;
        int n=S.size();
        int start=0;
        for(int i=0; i<n; i++){
            if(i==n-1|| S[i]!=S[i+1]){
                if(i-start+1>=3) {
                v.push_back({start, i});
                }
                start=i+1;
                }
            }
        return v;
        }
};
