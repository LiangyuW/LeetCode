class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int>v, w;
        set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), back_inserter(v));
        set_intersection(v.begin(), v.end(), arr3.begin(), arr3.end(), back_inserter(w));
        return w;
    }
};
