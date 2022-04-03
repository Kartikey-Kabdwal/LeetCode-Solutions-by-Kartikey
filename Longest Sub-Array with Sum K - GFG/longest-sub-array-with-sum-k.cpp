// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        int len=0;
        int prefix=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            prefix+=a[i];
            if(prefix==k) 
            {
                 len=i+1;
            }
            if(m.find(prefix)==m.end())
            {
                m.insert({prefix,i});
            }
            if(m.find(prefix-k)!=m.end())
            {
                len=max(len,i-m[prefix-k]);
            }
            
        }
        return len;
        
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends