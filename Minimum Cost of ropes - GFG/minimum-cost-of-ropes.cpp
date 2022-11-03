//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long v[], long long n) {
        // Your code here
        long long  sum=0;
        long long  cur=0;
        priority_queue<long long ,vector<long long>,greater<long long>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(v[i]);
            
        }
        // 2 3 4 6
        // 2 3  - 5
        // 4 5  -  9
        // 9 6  -  15
        while(pq.size()!=1)
        {
            cur=0;
            long long  a=pq.top();
            pq.pop();
            long long  b=pq.top();
            pq.pop();
            sum+=a+b;
        //   cout<<a<<" "<<b<<endl;
            cur=a+b;
            // cout<<cur<<" ";
            pq.push(cur);
            
        }
        return sum;
         
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends