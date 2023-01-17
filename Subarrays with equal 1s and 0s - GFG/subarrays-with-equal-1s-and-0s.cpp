//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int v[], int n)
    {
        unordered_map<long long int,long long int>m;
        m[0]=1;
            
            long long int ans=0;
            long long int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=v[j]==1?1:-1;
                ans+=m[sum];
                m[sum]++;
            }
            return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends