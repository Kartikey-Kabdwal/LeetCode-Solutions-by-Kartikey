class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>&grid,vector<pair<int,int>>&v)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid.size())
        {
            return;
        }
        if(grid[i][j]==0)
        {
            return;
        }
        grid[i][j]=0;
        v.push_back(make_pair(i,j));
        dfs(i+1,j,grid,v);
        dfs(i-1,j,grid,v);
        dfs(i,j+1,grid,v);
        dfs(i,j-1,grid,v);
        
        
    }
    int shortestBridge(vector<vector<int>>& grid) {
        vector<pair<int,int>>a,b;
        int f=0;
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid.size();j++)
                {
                    if(grid[i][j]==1)
                    {
                        if(f==0)
                        {
                            f=1;
                            dfs(i,j,grid,a);
                        }
                        else
                        {
                            dfs(i,j,grid,b);
                        }
                    }
                }
            }
        int m=INT_MAX;
        for(auto i:a)
        {
            for(auto j:b)
            {
                m=min(m,abs(j.first-i.first)+abs(j.second-i.second)-1);
            }
        }
        return m;
       
        
    }
};