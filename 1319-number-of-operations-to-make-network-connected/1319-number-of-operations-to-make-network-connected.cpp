class Solution {
public:
    void bfs(int i,vector<int> adj[],vector<int> & vis)
    {
        queue<int>q;
        q.push(i);
        vis[i]=1;
        
        while(!q.empty())
        {
            int it=q.front();
            q.pop();
            for(auto it:adj[it])
            {
                if(!vis[it])
                {
                    bfs(it,adj,vis);
                     vis[it]=1;
                    
                }
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
          if(connections.size()<n-1)
        {
            return -1;
        }
                vector<int> adj[n];
        
        int m=connections.size();
        int c=0;
        for(int i=0;i<m;i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        int ans=0;
        
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                bfs(i,adj,vis);
                c++;
            }
        }
        return c-1;

        
    }
};