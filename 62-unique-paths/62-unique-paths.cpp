class Solution {
public:
    
    // declare a dp
    
    int dp[105][105];
    
   int helper(int i, int j, int n, int m)
     {
         
          if (i >= n or j >= m)
          {
               return 0;
          }
          if (i == n - 1 && j == m - 1)
               return 1;

      
          if (dp[i][j] != -1)
               return dp[i][j];

          int paths = 0;

       
          paths += helper(i + 1, j, n, m);

          paths += helper(i, j + 1, n, m);

     
          return dp[i][j] = paths;
     }
    
    int uniquePaths(int n, int m) {
        
        // initialize dp with -1
        
        memset(dp, -1, sizeof(dp));
        
        return helper(0, 0, n, m);
    }
};
