//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int calc(int coins[],int n,int k,int i,vector<vector<int>>&dp)
	{
	    if(k==0)
	    {
	        return 0;
	    }
	    if(i>=n)
	    {
	        return 1e9;
	    }
	    if(dp[i][k]!=-1)
	    {
	        return dp[i][k];
	    }
	    if(coins[i]>k)
	    {
	        return dp[i][k]=calc(coins,n,k,i+1,dp);
	    }
	    return dp[i][k]=min(1+calc(coins,n,k-coins[i],i,dp),calc(coins,n,k,i+1,dp));
	    
	}
	int minCoins(int coins[], int n, int k) 
	{ 
	    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
	   int x= calc(coins,n,k,0,dp);
	   return x==1e9?-1:x;
	   
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends