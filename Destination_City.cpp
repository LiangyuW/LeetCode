static auto speedup = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();


class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> start;
        for(int i=0; i<paths.size(); i++){
            start.insert(paths[i][0]);
        }
        for(int i=0; i<paths.size(); i++){
            if(start.count(paths[i][1])==0){
                return paths[i][1];
            }
        }
        return "";
    }
};

