class Solution {
public:
    int calc(vector<int>& v,int i,int n,vector<int>&dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        return dp[i]=max(v[i]+calc(v,i+2,n,dp),calc(v,i+1,n,dp));
    }
    int rob(vector<int>& v) {
        
        int n=v.size();
        vector<int>dp(n+1,-1);
        return calc(v,0,n,dp);
    }
};