// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxNumbers(int n, int k, int a[]){
        // code here
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
            
        }
        int c=0;
        int i=1;
        int count=0;
        while(c<=k)
        {
            if(!s.count(i))
            {
                c+=i;
                count++;
                
            }
            i++;
            
        }
        return count-1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.maxNumbers(n, k, a)<<"\n";
    }
    return 0;
}  // } Driver Code Ends