// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	sort(a,a+n);
    	int i=0,j=n-1;
    	long long c=0;
    	while(i<j)
    	{
    	    if(a[i]+a[j]<=0)
    	    {
    	        i++;
    	    }
    	    else
    	    {
    	        c+=j-i;
    	        j--;
    	    }
    	}
    
    return c;
    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends