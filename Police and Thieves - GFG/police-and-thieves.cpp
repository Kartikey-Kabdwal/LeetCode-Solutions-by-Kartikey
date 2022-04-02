// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char s[], int n, int k) 
    {
        // Code here 
        int c=0;
        queue<int>police,chor;
        for(int i=0;i<n;i++)
        {
            s[i]=='P'?police.push(i):chor.push(i);
        }
        while(!police.empty() and !chor.empty())
        {
            if(abs(police.front()-chor.front())<=k)
            {
                c++;
                police.pop();
                chor.pop();
            }
            else if(police.front()<chor.front())
            {
                police.pop();
            }
            else
            {
                chor.pop();
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