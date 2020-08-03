class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x11=rec1[0], x12=rec1[2], x21=rec2[0], x22=rec2[2];
        int y11=rec1[1], y12=rec1[3], y21=rec2[1], y22=rec2[3];

        if(x11>=x22 || y11>=y22 ||x21>=x12||y21>=y12){
            
           return false;
        }  
        return true;
    }
};
