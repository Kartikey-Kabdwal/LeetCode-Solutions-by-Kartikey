class Solution {
public:
    int calc(vector<vector<int>>&v,int i,int j,int n,int m,vector<vector<int>>&dp)
    {
        if( j<0 or i>n or j>m) {
            return INT_MAX;
        }
        if(i==n)
        {
            return v[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=v[i][j]+min({calc(v,i+1,j,n,m,dp),
                            calc(v,i+1,j+1,n,m,dp),
                            calc(v,i+1,j-1,n,m,dp)
                            });
    }
    int minFallingPathSum(vector<vector<int>>& v) {
        
        int n=v.size();
        int ans=1e9;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++)
        {
            ans=min(ans, calc(v,0,i,n-1,n-1,dp));
            
        }
        return ans;
        
        
    }
};