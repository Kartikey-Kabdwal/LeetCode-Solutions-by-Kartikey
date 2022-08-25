class Solution {
public:
    int calc(vector<int>v,int n,int i,vector<int>&dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        return dp[i]=v[i]+min(calc(v,n,i+1,dp),calc(v,n,i+2,dp));
    }
    int minCostClimbingStairs(vector<int>& v) {
        
        int n=v.size();
        vector<int>dp(n+1,-1);
        
        return min(calc(v,n,1,dp),calc(v,n,0,dp));
        
        
    }
};