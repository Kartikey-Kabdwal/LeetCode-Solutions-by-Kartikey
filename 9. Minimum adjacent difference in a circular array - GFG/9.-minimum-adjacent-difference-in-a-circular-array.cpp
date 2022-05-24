// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){  
        
        
        // for(int i=0;i<n-1;i++)
        // {
        //     v[i]=abs(v[i+1]-v[i]);
            
        // }
        // v[n-1]=abs(v[n-1]-v[0]);
        // return *min_element(v,v+n);
        
        
        int arr1[n];
       for(int i=0;i<n-1;++i)
       {
           arr1[i]=abs(arr[i+1]-arr[i]);
       }
       arr1[n-1]=abs(arr[n-1]-arr[0]);
       int k=*min_element(arr1,arr1+n);
       return k;
        
        
        // Your code here
        
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends