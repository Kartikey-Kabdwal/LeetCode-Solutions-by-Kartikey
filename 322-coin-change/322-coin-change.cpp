class Solution {
public:
    int count(int k, vector<int>& v,int n,int i,vector<vector<int>>&dp)
    {
        if(k==0)
        {
            return 0;
        }
        if(i==n)
        {
            return INT_MAX-1;
        }
        if(dp[i][k]!=INT_MAX)
        {
            return dp[i][k];
        }
        int res=-1;
        int reject=count(k,v,n,i+1,dp);
        res=reject;
        int accept=0;
        if(k>=v[i])
        {
            accept=1+count(k-v[i],v,n,i,dp);
            res=min(res,accept);
        }
        return dp[i][k]=res;
    }
    
    int coinChange(vector<int>& v, int k) {
         int n=v.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,INT_MAX));
        int res= count(k,v,n,0,dp);
        return res==INT_MAX-1?-1:res;
        
        
    }
};