class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m == 0) return 0;
        int n = grid[0].size();
        if(n == 0) return 0;
        
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int path = INT_MAX;
                if(i == 0 && j == 0) path = 0;
                if(i > 0 &&  grid[i-1][j] < path) path = grid[i-1][j];
                if(j > 0 &&  grid[i][j-1] < path) path = grid[i][j-1];
                grid[i][j] = grid[i][j] + path;
            }
        }
        return grid[m-1][n-1];
    }
};
