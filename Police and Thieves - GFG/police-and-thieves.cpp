// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char v[], int n, int k) 
    {
        vector<int>police,chor;
        for(int i=0;i<n;i++)
        {
            if(v[i]=='P')
            {
                police.push_back(i);
            }
            else
            {
                chor.push_back(i);
            }
        }
        int i=0,j=0;
        int c=0,c2=0;
        while(i<police.size() and j<chor.size())
        {
            if(abs(police[i]-chor[j])<=k)
            {
                c++;
                i++;
                j++;
            }
            else if(police[i]<chor[j])
            {
                i++;
            }
            else
            {
                j++;
            }
            
        }
        return c;
    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 

  // } Driver Code Ends