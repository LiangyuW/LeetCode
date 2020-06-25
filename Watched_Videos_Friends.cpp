class Solution {
public:
    
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
     
        queue<pair<int, int>> q;
        
        vector<bool>visited(105, false);
        q.push(make_pair(id, 0));
        visited[id]=true;
        
        unordered_map<string, int> m;
       vector<string> out;
        
        while(!q.empty()){
            int k=q.front().first;
            int depth= q.front().second;
            

            q.pop();
            
          
            for(int i:friends[k]){
                if(!visited[i]){
                    q.push(make_pair(i, depth+1));
                    visited[i]=true;
                }
            }
            
            if(depth==level){
                for(auto e: watchedVideos[k]){
                    
                    if(m[e]){
                        m[e]++;
                    } else{
                        out.push_back(e);
                        m[e]=1;
                    }
                }
            }      
        }
        
        sort(out.begin(), out.end(), 
           [&]( string a, string b)
           {
               if(m[a]==m[b]){
                   return a<b;
               }
               return m[a] < m[b];
           });
         
        return out;
    }
    
    
};

auto speedUp = []() {std::ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
