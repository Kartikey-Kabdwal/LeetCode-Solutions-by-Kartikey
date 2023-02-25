//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int calc(int i, int n, vector<int>&v, int cur, int sum,vector<vector<int>>&dp)
{
     if (i == n)
     {
          // cout << abs(2 * cur - sum) << endl;
          return dp[i][cur]=abs(2 * cur - sum);
     }
     if(dp[i][cur]!=-1)
     {
         return dp[i][cur];
     }
      return dp[i][cur]=min(calc(i + 1, n, v, cur + v[i], sum,dp), calc(i + 1, n, v, cur, sum,dp));
}
	int minDifference(int arr[], int n)  { 
	   
	   vector<int>v(arr,arr+n);
	   
	   int sum = accumulate(v.begin(), v.end(), 0);
	   vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	   return calc(0, n, v, 0, sum,dp);
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
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends