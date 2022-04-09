// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int binaryPalin (long long int n)
	{string s;
	    int ans=0;
	    while(n)
	    {
	        s+=(n%2)-'0';
	        n=n/2;
	    }
	    
	    string x=s;
	    reverse(x.begin(),x.end());
	    if(x==s)
	    {
	        return 1;
	    }
	    return 0;
	    
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends