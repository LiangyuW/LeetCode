class Solution {
public:
    string sortString(string s) {
        vector<int>mp(26, 0);
        for(auto&e: s) mp[e-'a']++;
        string out="";
        while(out.size()!=s.size()){
        for(int i=0; i<26; i++){
            if(mp[i]>0){
                out+=i+'a';
                mp[i]--;
            }
        }
        for(int i=25; i>=0; i--){
            if(mp[i]>0){
                out+=i+'a';
                mp[i]--;
            }
        } 
        }
        return out;
    }
};
