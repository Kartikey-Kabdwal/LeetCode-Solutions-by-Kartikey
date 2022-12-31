class Solution {
public:
    
    
    int dp[105][105];
    
   int helper(int i, int j, int n, int m,vector<vector<int>>& v)
     {
         
          if (i >= n or j >= m or v[i][j]==1)
          {
               return 0;
          }
          if (i == n - 1 && j == m - 1)
          {
               return 1;
          }

      
          if (dp[i][j] != -1)
          {
               return dp[i][j];
          }

          int paths = 0;

       
          paths += helper(i + 1, j, n, m,v);

          paths += helper(i, j + 1, n, m,v);

     
          return dp[i][j] = paths;
     }
    
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        
        int n=v.size();
        int m=v[0].size();
        
         memset(dp, -1, sizeof(dp));
        
        return helper(0, 0, n, m,v);
        
    }
};