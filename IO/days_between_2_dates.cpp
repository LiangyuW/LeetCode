class Solution {
public:
    
    int days(string date){
        vector<int>months{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int year=stoi(date.substr(0, 4));
        int month=stoi(date.substr(5, 2));
        int day=stoi(date.substr(8));
        
        int yeardays=0;
        
        
        for(int i=1; i<year; i++){
        if((i%4==0)&&(i%100!=0||(i%100==0 && i%400==0))){
                    yeardays+=366;
        }else{
                    yeardays+=365;
            }
        }
        
        if((year%4==0)&&(year%100!=0||(year%100==0 && year%400==0))){
                    months[2]=29;
        }else{
                    months[2]=28;
        }
        
        int monthdays=accumulate(months.begin(), months.begin()+month, 0);
        
        return yeardays+monthdays+day;
    }
    
    
    int daysBetweenDates(string date1, string date2) {
        
        int totaldays1 =days(date1);
        int totaldays2 =days(date2);
        return abs(totaldays2-totaldays1);

    }
};
