//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long bs(vector<long long> v, long long k, long long f)
{
     long long low = 0, high = v.size() - 1;
     long long ans = -1;
     while (low <= high)
     {
          long long mid = low + (high - low) / 2;
          if (v[mid] == k)
          {
               ans = mid;
               if (f == 0)
               {
                    high = mid - 1;
               }
               else
               {
                    low = mid + 1;
               }
          }
          else if (v[mid] < k)
          {
               low = mid + 1;
          }
          else
          {
               high = mid - 1;
          }
     }
     return ans;
}
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        
        long long a=bs(v,x,0);
        long long b=bs(v,x,1);
        return {a,b};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends