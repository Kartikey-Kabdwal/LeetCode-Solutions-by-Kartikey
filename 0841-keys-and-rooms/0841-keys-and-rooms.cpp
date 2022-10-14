class Solution {
public:
    void dfs(vector<vector<int>>& v,vector<bool>&vis,int i)
    {
        if(vis[i])
        {
            return;
        }
           vis[i]=true;
        for(auto it:v[i])
        {
         dfs(v,vis,it);
            
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& v) {
        
        int n=v.size();
        vector<bool>vis(n,false);
        
        dfs(v,vis,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                return false;
            }
        }
        return true;
        
        
    }
};