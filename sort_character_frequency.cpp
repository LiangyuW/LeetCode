class Solution {
public:

    string frequencySort(string s) {
        
        unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            if(!mp[s[i]]) mp[s[i]]=1;
            else mp[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto [key, val]: mp){
            pq.push({val, key});
        }
        string out="";
        
        while(!pq.empty()){
            auto [v, k]=pq.top();
            pq.pop();
                for(int i=0; i<v; i++){
                    out+=k;
                }
        }
        
        
        return out;
    }
};

static char __ = []() -> char {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return '\0';
}();
