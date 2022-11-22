//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define sz 10005
unordered_set<int>s;
bool isprime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
void solve()
{
for(int i=0;i<=sz;i++)
{    if(isprime(i))
{     
    s.insert(i);
    
}
}
}
class Solution{
public:
    vector<int> primeDivision(int n){
        solve();
        int x=n;
        while(x--)
        {
            if(s.count(x) and s.count(n-x))
            {
                return {n-x,x};
            }
        }
        return {};
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends