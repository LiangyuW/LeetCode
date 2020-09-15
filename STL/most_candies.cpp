class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool>out;
        int maxcandy=*max_element(candies.begin(), candies.end());
        
        transform(candies.begin(), candies.end(), back_inserter(out), 
                  [&](const auto& e)->bool{ return e + extraCandies >= maxcandy ; });
        return out;
    }
};
