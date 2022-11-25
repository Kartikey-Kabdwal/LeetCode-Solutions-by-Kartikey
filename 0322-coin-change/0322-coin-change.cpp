class Solution {
public:
    int calc(int i,int k,int n,vector<int>&v,vector<vector<int>>&dp)
    {
        if(k==0){
            return 0;
        }
        if(i>=n){
            return 1e9;
        }
        if(dp[i][k]!=-1)
        {
            return dp[i][k];
        }
        int take=1e9,notake=1e9;
        if(v[i]>k)
        {
            return  dp[i][k]=calc(i+1,k,n,v,dp);
        }
        take=1+calc(i,k-v[i],n,v,dp);
        notake=calc(i+1,k,n,v,dp);
        return dp[i][k]=min(take,notake);
        
    }
    int coinChange(vector<int>& v, int k) {
        int n=v.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int ans= calc(0,k,n,v,dp);
        return ans==1e9?-1:ans;
        
    }
};