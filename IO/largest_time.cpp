class Solution {
public:
    string largestTimeFromDigits(vector<int>& a) {
        sort(a.begin(), a.end());
     
        int maxtime=-1;
        
        do{
            int hour=a[0]*10+a[1];
            int min=a[2]*10+a[3];
            if(hour<24 && min<60){
              int new_time=hour*60+min;
              maxtime=max(maxtime, new_time);
            }
        } while(next_permutation(a.begin(), a.end()));
        
        if(maxtime==-1) return"";
        else {
            ostringstream ss;
            ss<<std::setw(2)<<std::setfill('0')<<maxtime/60<<":"<<std::setw(2)<<std::setfill('0')<<maxtime%60;
            return ss.str();
            
        }
    }
};
