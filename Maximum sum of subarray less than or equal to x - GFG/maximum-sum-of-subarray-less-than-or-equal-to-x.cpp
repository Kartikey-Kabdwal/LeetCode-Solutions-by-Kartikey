// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	int findMaxSubarraySum(long long a[], int n, long long k)
	{
	    // Your code goes here
	    int j=0,i=0;
	    int s=0;
	    int m=0;
	   for(int j=0;j<n;j++)
    {
        s+=a[j];
        while(s>k)
        {
            s-=a[i];
            i++;
        }
        m=max(m,s);
    }
	    return m;
	    
	}  

		 

};
	  



// { Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends