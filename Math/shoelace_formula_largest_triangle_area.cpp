class Solution {
public:
    double area(vector<int>&P, vector<int>&Q, vector<int>&R){
        return 0.5*std::abs(P[0]*Q[1]+Q[0]*R[1]+R[0]*P[1] - P[1]*Q[0]-Q[1]*R[0]-R[1]*P[0]);
    }
    
    
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double largest_area=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    largest_area = max(largest_area, area(points[i], points[j], points[k]));
                }
            }
        }
        return largest_area;
    }
};
