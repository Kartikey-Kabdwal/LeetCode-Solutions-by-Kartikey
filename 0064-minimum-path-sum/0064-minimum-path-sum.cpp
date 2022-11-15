class Solution {
public:
    int check(vector<vector<int>>&v,int i,int j,vector<vector<int>>&dp)
    {
        
        if(i==v.size()-1 and j==v[0].size()-1)
        {
           cout<<v[i][j]<<"->  ";
            return v[i][j];
        }
        
        if(i>=v.size() or j>=v[0].size())
        {
            return 1e9;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        return dp[i][j]=v[i][j]+min(check(v,i+1,j,dp),check(v,i,j+1,dp));
        
    }
    int minPathSum(vector<vector<int>>& v) {
       
        int n=v.size();
        int m=v[0].size();
        int sum=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        sum=check(v,0,0,dp);
        return sum;
        
    }
};