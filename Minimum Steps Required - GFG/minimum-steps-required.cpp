//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string s) {
    int n=s.size();
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' and (s[i]!=s[i+1] or i==n-1))
        {
            a++;
        }
        if(s[i]=='b' and (s[i]!=s[i+1] or i==n-1))
        {
            b++;
        }
        
    }
    // cout<<a<<" "<<b<<" \n";
    // cout<<" \n";
    if(a==b)
    {
        return a+1;
    }
    return max(a,b);
    
    
    
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends