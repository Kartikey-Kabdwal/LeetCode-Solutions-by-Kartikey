class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size())
        {
            return;
        }
        if(grid[i][j] == '2' || grid[i][j] == '.')
        {return;}  
        grid[i][j]='2';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);

    }
    int countBattleships(vector<vector<char>>& grid) {
        
          int c=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='X')
                {
                    dfs(grid,i,j);
                    c++;
                }
            }
        }
        return c;
        
    }
};