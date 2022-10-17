//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void dfs(vector<vector<int>>&v,int i,int j)
  {
      if(i<0 or j<0 or i>=v.size() or j>=v[0].size())
      {
          return;
          
      }
      if(v[i][j]==0)
      {
          return ;
      }
      v[i][j]=0;
      dfs(v,i+1,j);
      dfs(v,i-1,j);
      dfs(v,i,j+1);
      dfs(v,i,j-1);
                
  }
    int numberOfEnclaves(vector<vector<int>> &v) {
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(i==0 or j==0 or i==v.size()-1 or j==v[0].size()-1)
                {
                    if(v[i][j]==1)
                    {
                        dfs(v,i,j);
                    }
                }
            }
        }
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==1)
                {
                    c++;
                }
                
            }
        }
        return c;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends