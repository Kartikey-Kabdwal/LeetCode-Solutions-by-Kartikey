//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    int calc(int i,int k,vector<int> adj[],vector<int>&vis)
    {
        if(vis[i])
        {
            return 0;
        }
        // cout<<i<<" -> ";
        if(i==k)
        {
            return 1;
        }
        vis[i]=1;
        int c=0;
        for(auto it:adj[i])
        {
            c+=calc(it,k,adj,vis);
            
        }
          vis[i]=0;
        return c;
        
    }
    int countPaths(int V, vector<int> adj[], int i, int k) {
       
       
       vector<int>vis(V,0);
       return calc(i,k,adj,vis);
    }
    
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}
// } Driver Code Ends