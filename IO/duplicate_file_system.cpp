class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        unordered_map<string, vector<string>>dict;
        vector<vector<string>> out;
        
        for(auto&e: paths){
            istringstream is(e);
            string root;
            string part;
            string filepath;
            string filename;
            string filecontent;
            getline(is, root, ' ');
            while(getline(is, part, ' ')){
                    auto l=part.find('(');
                    auto r=part.find(')');
                    filename=part.substr(0, l);
                    filecontent=part.substr(l+1, r-l-1);
                    string path=root+"/"+filename;
                    dict[filecontent].push_back(path);
            }
        }
        for(auto&e: dict){
            if(e.second.size()>1){
            out.push_back(e.second);
            }
        }
        
        return out;
    }
};
