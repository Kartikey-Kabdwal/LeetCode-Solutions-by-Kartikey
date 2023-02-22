//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool dfscheck(int i,int V,vector<int>adj[],vector<int>&vis,vector<int>&path)
    {
        bool ans=false;
        
        if(vis[i]==1 and path[i]==1)
        {
            return true;
        }
        else if(vis[i]==1)
        {
            return false;
        }
        vis[i]=1;
        path[i]=1;
        for(auto it:adj[i])
        {
            ans|=dfscheck(it,V,adj,vis,path);
            
        }
        path[i]=0;
        return ans;
        
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>path(V,0);
        // vector<int>vis(V,0);
        bool ans=false;
        
        for(int i=0;i<V;i++)
        {
            ans|=dfscheck(i,V,adj,vis,path);  
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends