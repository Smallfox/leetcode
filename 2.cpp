class Solution {
public:
    int uniquePaths(int m, int n) {
        int solve[m][n];
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if( i == 0 || j == 0)
                    solve[i][j] = 1;
                else
                solve[i][j] = solve[i-1][j] + solve[i][j-1];
            }
        }
        return solve[m-1][n-1];
    }
};
