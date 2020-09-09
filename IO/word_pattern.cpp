class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        int n=pattern.size();
        int m=str.size();
        unordered_map<string, int>mp;
        vector<string>words;
        
        istringstream ss(str);
        string part;
        while(getline(ss, part, ' ')){
            words.push_back(part);
        }
        
        if(n!=words.size()) return false;

        
        for(int j=0; j<n; j++){
            string c="char_";
            c+=pattern[j];
            string word="word_"+words[j];
            
            if(mp.find(c)==mp.end()){
                mp[c]=j;
            }
            
            if(mp.find(word)==mp.end())
                mp[word]=j;
            
            if(mp[c]!=mp[word]) return false;
                   
        }
        
        return true;
        
    }
};
