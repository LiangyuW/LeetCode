class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> map;
        vector<string> out;
   
        
        for(int i=0; i<names.size(); i++){
            if(map.count(names[i])==0){
                map[names[i]]=0;
                out.push_back(names[i]);
            } else{
                map[names[i]]++;

                int k = map[names[i]];
               
                string name = names[i]+"("+to_string(k)+")";
               
                while(map.count(name)!=0){
                    k++;

                    name = names[i]+"("+to_string(k)+")";
                }
                map[name]=0;
                out.push_back(name);
            }
        }
    
        return out;
    }
};
