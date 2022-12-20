class Solution {
public:
    void dfs(int start,vector<bool>&vis, vector<int>g[])
    {
        if(vis[start])
        {
            return;
        }
        vis[start]=true;
        for(auto it:g[start])
        {
            dfs(it,vis,g);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& v) {
        
        vector<bool>vis(v.size(),false);
        int n=v.size();
        vector<int>g[n];
        for(int i=0;i<n;i++)
        {
            for(auto it:v[i])
            {
                g[i].push_back(it);
            }
        }
        dfs(0,vis,g);
        for(auto it:vis)
        {
            if(!it)
            {
                return false;
            }
        }
        return true;
        
    }
};