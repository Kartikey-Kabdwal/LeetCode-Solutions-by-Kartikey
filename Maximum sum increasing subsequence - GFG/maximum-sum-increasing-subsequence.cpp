//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int lis(int v[],int n, int i, int prev, vector<vector<int>> &dp)
{
     if (i >= n)
     {
          return 0;
     }
     if (dp[i][prev + 1] != -1)
     {
          return dp[i][prev + 1];
     }
     int a = 0, b = 0;
     a = lis(v,n, i + 1, prev, dp);
     if (prev == -1 or v[i] > v[prev])
     {
          b = v[i] + lis(v,n, i + 1, i, dp);
     }
     return dp[i][prev + 1] = max(a, b);
}
	int maxSumIS(int v[], int n)  
	{  
	     vector<vector<int>> dp(n, vector<int>(n + 1, -1));
	     return lis(v,n, 0, -1, dp);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends