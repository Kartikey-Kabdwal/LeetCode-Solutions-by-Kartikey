//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &v) {
    // Write your code here.\
    
    
    long long ans=0;
    long long len=0;
    int i=0,j=0;
    while(j<n)
    {
        if(v[j]==0)
        {
            len++;
            ans++;
        }
        if(len and v[j]!=0)
        {
            ans+=len*(len-1)/2;
            len=0;
        }
       
        j++;
    }
    if(len>1)
        {
            ans+=len*(len-1)/2;
            len=0;
        }
        return ans;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends