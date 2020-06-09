class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s);
        vector<string> substrs;
        int max=0;
        int maxindex = -1;
        int index = 0;
        while(ss.good()){
            string k;
            ss >> k;
            if(k.length()>max){
                max = k.length();
                maxindex = index;
            }
            substrs.push_back(k);
            index++;
        }
        
        for(int i = 0; i< substrs.size(); i++){
            if(substrs[i].length()<max){
                int tlen = max-substrs[i].length(); 
                string t(tlen, ' ');
                substrs[i]+=t;
                
            } 
        }
      
        
        vector<string> out;

        for(int j = 0; j<max; j++){
            string o;
            for(int i = 0; i<substrs.size(); i++){             
                    o +=substrs[i][j];
            }
            int p = o.size()-1;
            while(o[p]==' '){
                if(o[p-1]!=' '){
                    o[p]='\0';
                }
                p--;
            }
            
            
            out.push_back(o);
        }
         
        for(auto e:out){
            cout <<e<<endl;
        }
    
    return out;
    }
    
};
