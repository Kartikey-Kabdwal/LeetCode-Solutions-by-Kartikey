class Solution {
public:
    bool check(vector<int>&v,int i,int x,vector<vector<int>>&dp)
    {
        if(x<=0)
        {
              return x==0;
        }
        if(i==0)
        { return (v[i]==x);}
        if(dp[i][x]!=-1)
        {
            return dp[i][x];
        }
         
        else
        {
            return dp[i][x]= check(v,i-1,x,dp) or check(v,i-1,x-v[i],dp);
        }
    }
    bool canPartition(vector<int>& v) {
        int n=v.size();
        
        int x=accumulate(v.begin(),v.end(),0);
        
        if(x%2==1) 
        {return 0;}
        else
        {
            x=x/2;
            vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
             
          return check(v,n-1,x,dp) ;
        }
        
    }
};