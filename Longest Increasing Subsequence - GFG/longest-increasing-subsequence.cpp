//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    
    int calc(int a[],int i,int prev,int n,vector<vector<int>>&dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i][prev+1]!=-1)
        {
            return dp[i][prev+1];
        }
        int take=0,notake=0;
        if(prev==-1 or a[i]>a[prev])
        {
            take= 1+calc(a,i+1,i,n,dp);
        }
        notake=calc(a,i+1,prev,n,dp);
        return  dp[i][prev+1]=max(take,notake);
    }
    int longestSubsequence(int n, int a[])
    {
       vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       return calc(a,0,-1,n,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends