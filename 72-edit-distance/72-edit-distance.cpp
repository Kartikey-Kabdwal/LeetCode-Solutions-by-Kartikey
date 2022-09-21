class Solution {
public:
    int calc(string s1,string s2,int n,int m,vector<vector<int>>&dp)
    {
        if(n==0)
        {
            return m;
        }
         if(m==0)
        {
            return n;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        if(s1[n-1]==s2[m-1])
        {
            return dp[n][m]=calc(s1,s2,n-1,m-1,dp);
        }
        return dp[n][m]=1+min({calc(s1,s2,n-1,m-1,dp),
                   calc(s1,s2,n-1,m,dp),
                   calc(s1,s2,n,m-1,dp)
                  
                     });
        
        
    }
    int minDistance(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return calc(s1,s2,n,m,dp);
        
    }
};