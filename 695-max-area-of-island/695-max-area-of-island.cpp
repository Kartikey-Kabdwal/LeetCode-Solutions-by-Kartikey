class Solution {
public:
    int c=0;
    void dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==0)
        {
            return;
        }
        if(grid[i][j]==-1)
        {
            return;
        }
        grid[i][j]=-1;
        c++;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    c=0;
                    dfs(grid,i,j);
                    ans=max(c,ans);
                }
               
            }
        }
        return ans;
        
        
        
    }
};