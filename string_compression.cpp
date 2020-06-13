class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int len = chars.size();
        int ans = 0;
        
        while(i<len){
            int count = 0;
            char k = chars[i];
            
            while(i<len && chars[i]==k){
                count++;
                i++;
            }
            chars[ans++]=k;
            if(count!=1){
                for(char c:to_string(count)){
                    chars[ans++]=c;
                }
            }
        }
        return ans;
    }
        
};
