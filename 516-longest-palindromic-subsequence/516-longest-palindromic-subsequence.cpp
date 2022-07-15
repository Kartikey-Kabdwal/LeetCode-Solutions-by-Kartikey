class Solution {
public:
    int lcs(int n,int m,string &a ,string &b,vector<vector<int>>&dp)
    {
        if(n==0 or m==0)
        {
            dp[n][m]= 0;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        else
        {
        if(a[n-1]==b[m-1])
        {
            dp[n][m]= 1+lcs(n-1,m-1,a,b,dp);
        }
        else
        {
            dp[n][m]= max(lcs(n-1,m,a,b,dp),lcs(n,m-1,a,b,dp));
        }
        }
        return dp[n][m];
    }
    int longestPalindromeSubseq(string a) {
        string b(a.rbegin(), a.rend());
        
        int n=a.size();
        int m=b.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return lcs(n,m,a,b,dp);
        
    }
};