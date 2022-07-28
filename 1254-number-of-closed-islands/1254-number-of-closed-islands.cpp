class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& v)
    {
        if(i<0 or j<0 or i>=v.size() or j>=v[0].size())
        {
            return ;
        }
        if(v[i][j]==1)
        {
            return;
        }
        v[i][j]=1;
        dfs(i+1,j,v);
        dfs(i-1,j,v);
        dfs(i,j+1,v);
        dfs(i,j-1,v);
        
    }
    int closedIsland(vector<vector<int>>& v) {
       int c=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if( i*j==0 or i==v.size()-1 or j==v[i].size()-1)
                {
                    dfs(i,j,v);
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==0)
                {
                    dfs(i,j,v);
                    c++;
                }
            }
        }
        return c;
        
    }
};