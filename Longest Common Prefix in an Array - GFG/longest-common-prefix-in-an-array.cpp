// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string s[], int n)
    {
        // your code here
        sort(s,s+n);
        int i=0;
        string ans="";
        while(i<s[n-1].size() and i<s[0].size())
        {
            if(s[0][i]==s[n-1][i])
            {
                ans+=s[0][i];
            }
            else
            {
               break;
            }
            i++;
        }
        return ans==""?"-1":ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends