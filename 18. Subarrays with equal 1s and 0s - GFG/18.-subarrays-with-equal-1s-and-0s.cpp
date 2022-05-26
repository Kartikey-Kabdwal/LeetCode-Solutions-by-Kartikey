// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int v[], int n)
    {
        //Your code here
        
        unordered_map<int,int>m;
        m[0]=1;
        int sum=0;
        int pre=0;
        for(int i=0;i<n;i++)
        {
           v[i]==1?pre++:pre--;
           if(m[pre])
           {
               sum+=m[pre];
           }
           m[pre]++;
        }
        return sum;
        
        
    }
};

// { Driver Code Starts.

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