//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        
        unordered_map<long long int,long long int>m;
        m[0]=1;
        long long int sum=0;
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            
            m[sum]++;
        }
        for (auto it:m)
        {
            // cout<<it.first<<"-> "<<it.second<<endl;
            if(it.second>1)
            {
            ans+=factorial(it.second)/(factorial(it.second-2)*2);
            }
            
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
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends