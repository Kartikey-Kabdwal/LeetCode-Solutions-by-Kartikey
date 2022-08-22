class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();        
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=v[0];
        for(int i=1;i<n;i++)
        {
            dp[i+1]=max(dp[i],dp[i-1]+v[i]);
        }
        return dp[n];
        
    }
};