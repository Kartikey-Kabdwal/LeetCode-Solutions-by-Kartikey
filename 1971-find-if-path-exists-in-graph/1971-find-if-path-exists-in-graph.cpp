class Solution {
public:
    bool dfs(int start,int end,vector<vector<int>>& v,vector<int>&vis)
    {
        if(start==end)
        {
            return true;
        }
        
        if(vis[start])
        {
            return false;
        }
        cout<<start<<" ";
        vis[start]=true;
        bool ans=false;
        for(auto it:v[start])
        {
            ans|=dfs(it,end,v,vis);
        }
        return ans;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>v(n);
        for(auto it:edges)
        {
            v[it[0]].push_back(it[1]);
            v[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,false);
        
        return dfs(source,destination,v,vis);

        
    }
};