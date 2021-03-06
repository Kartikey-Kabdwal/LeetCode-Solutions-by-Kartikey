// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends


vector<int> permute(vector<vector<int>> &v, int n)
{
    
   vector<pair<int,int>>p(n);
   for(int i=0;i<n;i++)
   {
      p[i]={v[i][0]+v[i][1],i};
   }
   sort(p.begin() , p.end());
    vector<int>ar(n); // new 
     
     for(int i =0; i< n; i++){
         ar[i] = p[i].second + 1;
     }
   
   return ar;
    
}