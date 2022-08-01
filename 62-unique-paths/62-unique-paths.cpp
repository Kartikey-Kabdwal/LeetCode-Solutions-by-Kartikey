class Solution {
public:
    
    // declare a dp
    
    int dp[105][105];
    
    int helper(int i, int j, int n, int m)
    {
        // if target is reached
        
        if(i == n - 1 && j == m - 1)
            return 1;
        
        // if already calculated
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int paths = 0;
        
        // possible paths from down side
        
        if(i + 1 < n)
        {
            paths += helper(i + 1, j, n, m);
        }
        
        // possible paths from right side
        
        if(j + 1 < m)
        {
            paths += helper(i, j + 1, n, m);
        }
        
        // store the result in dp and return it
        
        return dp[i][j] = paths;
    }
    
    int uniquePaths(int n, int m) {
        
        // initialize dp with -1
        
        memset(dp, -1, sizeof(dp));
        
        return helper(0, 0, n, m);
    }
};
