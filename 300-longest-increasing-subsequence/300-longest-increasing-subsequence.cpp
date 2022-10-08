class Solution {
public:
    int calc(vector<int>&v,vector<vector<int>>&dp,int n,int i,int prev)
    {
        if(i==n){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        
        int take=0,nottake=0;
        
        nottake=calc(v,dp,n,i+1,prev);
        
        if(prev==-1 or v[prev]<v[i])
        {
            take= 1+calc(v,dp,n,i+1,i);
        }
        
        return dp[i][prev+1]=max(take,nottake);
        
    }
    int lengthOfLIS(vector<int>& v) {
        
        int n=v.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return calc(v,dp,n,0,-1);
        
    }
};