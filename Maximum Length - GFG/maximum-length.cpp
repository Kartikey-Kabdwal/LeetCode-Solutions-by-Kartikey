//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        vector<int>v(3);
        v[0]=a;
        v[1]=b;
        v[2]=c;
        sort(v.begin(),v.end());
        if(2*(1+v[0]+v[1])<v[2])
      {
        return -1;
      }
    else
    {
    return a+b+c;
    }
}
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends