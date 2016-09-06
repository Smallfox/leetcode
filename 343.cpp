class Solution {
public:
    int integerBreak(int n) {
        if(n == 2) return 1;
        if(n == 3) return 2;
        if(n == 4) return 4;
        int sum = 1;
        while(n > 4){
            sum = sum * 3;
            n = n - 3;
        }
        sum = sum * n;
        return sum;
    }
};
