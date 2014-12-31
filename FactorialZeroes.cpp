class Solution {
public:
    int trailingZeroes(int n) {
        int x = 5, tz = 0;
        while( n >= x )
        {
            tz += ( n / x );
            x *= 5;
        }
        return tz;
    }
};