// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int v[], int n) 
    { 
        // Your code here
        
        for(int i=0;i<n;i++)
        {
            while(v[i] >= 1 && v[i] <= n && v[i] != v[v[i]-1])
            {
                swap(v[v[i]-1],v[i]);
            }
        }
        // int allr=1;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=i+1)
            {
                // allr=0;
                return i+1;
            }
        }
        
            return n+1;
        
        
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends