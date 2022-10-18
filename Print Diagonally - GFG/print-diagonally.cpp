//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> v)
	{
	    vector<int>ans;
		
		    for(int j=0;j<n;j++)
		    {
		        
		        int x=0,y=j;
		        while(x>=0 and y>=0 and x<n and y<n)
		        {
		            ans.push_back(v[x][y]);
		            x++;
		            y--;
		            
		            
		        }
		    
		    }
		    for(int j=1;j<n;j++)
		    {
		         int x=j,y=n-1;
		        while(x>=0 and y>=0 and x<n and y<n)
		        {
		             ans.push_back(v[x][y]);
		            x++; y--;
		            
		        }
		    }
		    return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends