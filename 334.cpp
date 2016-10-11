class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a, b, c;
        a = b = c = INT_MAX;
        for(int n : nums){
            a = min(a, n);
            if(a == n) continue;
            b = min(b, n);
            if(b == n) continue;
            c = min(c, n);
        }
        return (a < b) && (b < c) && (a != INT_MAX && b != INT_MAX && c != INT_MAX);
    }
    
    int min(int lhs, int rhs){
        return lhs > rhs ? rhs : lhs;
    }
};
