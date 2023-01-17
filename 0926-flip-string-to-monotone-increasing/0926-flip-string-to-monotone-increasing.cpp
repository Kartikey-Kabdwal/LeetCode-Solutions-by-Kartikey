class Solution
{
public:
     int calc(int i, int &n, int o,string &s, vector<vector<int>> &dp)
     {
          if (i >= n)
          {
               return 0;
          }
          if (dp[i][o] != -1)
          {
               // cout << "----\n";
               return dp[i][o];
          }

          if (s[i] == '0')
          {
               if (o)
               {
                    return dp[i][o] = 1 + calc(i + 1, n, 1, s, dp);
               }
               else
               {
                    return dp[i][o] = min(calc(i + 1, n, o, s, dp), 1 + calc(i + 1, n, 1, s, dp));
               }
          }
          else
          {
               if (o)
               {
                    return dp[i][o] = calc(i + 1, n,1, s, dp);
               }
               else
               {
                    return dp[i][o] = min(1 + calc(i + 1, n, o, s, dp), calc(i + 1, n, 1, s, dp));
               }
          }
          return 1e5;
     }
     int minFlipsMonoIncr(string s)
     {
          int n = s.size();

          vector<vector<int>> dp(n + 1, vector<int>(2, -1));

          return calc(0, n, 0, s, dp);
     }
};