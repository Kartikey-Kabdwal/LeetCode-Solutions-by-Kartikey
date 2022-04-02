// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        int a=0,b=0;
      int temp=n;
        sort(candies,candies+n);
        for(int i=0;i<n;i++)
        {
           a+=candies[i];
           n-=k;
        }
        
         n=temp;
          sort(candies,candies+n,greater<int>());
         for(int i=0;i<n;i++)
        {
           b+=candies[i];
           n-=k;
        }
        return {a,b};
         
         
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends