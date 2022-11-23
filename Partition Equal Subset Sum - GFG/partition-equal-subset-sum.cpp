//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool check(int v[],int n,int i,int k)
    {
        if(k==0)
        {
            return true;
        }
        if(i>=n)
        {
            return false;
        }
        if(v[i]>k)
        {
            return check(v,n,i+1,k);
        }
        return check(v,n,i+1,k-v[i]) or check(v,n,i+1,k);
    }
    int equalPartition(int n, int v[])
    {
        int sum=accumulate(v,v+n,0);
        if(sum%2==1)
        {
            return 0;
        }
        sum/=2;
        return check(v,n,0,sum);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends