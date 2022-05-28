// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> v, int n ) {
        //code here
        
        ll s=0;
        ll c=0;
        unordered_map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            s+=v[i];
            if(s==0)
            {
                c++;
            }
            if(m[s])
            {
                c+=m[s];
            }
            
            m[s]++;
            
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
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends