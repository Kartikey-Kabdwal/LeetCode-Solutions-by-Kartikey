class Solution
{
    public:
        int solve(string &s1, string &s2, int i, int j, vector<vector < int>> &dp)
        {
            if (i == size(s1) and j == size(s2))
                return 0;
            if (dp[i][j] != -1)
            {
                return dp[i][j];
            }
            if (i == size(s1))
                return dp[i][j]=size(s2) - j;
            if (j == size(s2))
                return dp[i][j]=size(s1) - i;
            if (s1[i] == s2[j])
                return dp[i][j]=solve(s1, s2, i + 1, j + 1, dp);

            return dp[i][j]=1 + min(solve(s1, s2, i + 1, j, dp), solve(s1, s2, i, j + 1, dp));
        }
    int minDistance(string &s1, string &s2)
    {
        int n = s1.size();
        int m = s2.size();

        vector<vector < int>> dp(n + 1, vector<int> (m + 1, -1));
        return solve(s1, s2, 0, 0, dp);
    }
};