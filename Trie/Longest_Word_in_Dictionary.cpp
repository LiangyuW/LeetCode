class Solution {
public:

    set<string> st;
    
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end(), []
            (const string&s1, const string&s2){
                if(s1.size()==s2.size()){
                    return s1<s2;
                }
                else return s1.size()>s2.size();
        });
        
        for(auto e: words){
            st.insert(e);
        }
        
        for(auto e: words){
            bool canbuild=true;
            for(int i=1; i<e.size(); i++){
                if(st.count(e.substr(0, i))==0){
                    canbuild=false;
                }
            }
            if(canbuild) return e;
        }
        

        return "";
    }
};
