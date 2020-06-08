class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); 
        int map_s[128] = { 0 };
        int map_t[128] = { 0 };
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            
            if(map_s[s[i]]!=map_t[t[i]]) {
                return false;
            }
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;

   
        }
    
        return true;
     }
};
