//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public: 
    bool check(int v[],int n,int i,int sum)
    {
        if(sum==0)
        {
            return true;
        }
        if(i>=n)
        {
            return false;
        }
        if(v[i]>sum)
        {
            return check(v,n,i+1,sum);
        }
        return check(v,n,i+1,sum) or check(v,n,i+1,sum-v[i]);
    }
    int sisterCoin(int v[], int n, int m){
        int sum=accumulate(v,v+n,0)+m;
        if(sum%2==1)
        {
            return 0;
        }
        sum/=2;
        sum-=m;
        return check(v,n,0,sum);
        
    }
};


//{ Driver Code Starts.

int main()
{
    Solution ob;
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int a[n];
	    for(int i = 0; i < n; ++i){
	        cin >> a[i];
	    }
	    cout << ob.sisterCoin(a, n, m) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends