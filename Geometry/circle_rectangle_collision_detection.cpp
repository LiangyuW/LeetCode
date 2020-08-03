class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        double closestX=(x_center<x1? x1:(x_center>x2? x2:x_center));
        double closestY=(y_center<y1? y1:(y_center>y2? y2:y_center));

        double dx=closestX-x_center;
        double dy=closestY-y_center;
        return dx*dx+dy*dy<=radius*radius? true:false;
    }
};


class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        double closestX=max(x1, min(x_center, x2));
        double closestY=max(y1, min(y_center, y2));

        double dx=closestX-x_center;
        double dy=closestY-y_center;
        return dx*dx+dy*dy<=radius*radius? true:false;
    }
};
