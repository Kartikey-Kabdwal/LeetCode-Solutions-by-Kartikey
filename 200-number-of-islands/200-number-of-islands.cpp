class Solution {
public:
    void dfs(vector<vector<char>>&v,int n,int m,int i,int j)
    {
        if(i<0 or j<0 or i>=n or j>=m or v[i][j]=='0')
        {
            return ;
        }
        v[i][j]='0';
        dfs(v,n,m,i+1,j);
        dfs(v,n,m,i-1,j);
        dfs(v,n,m,i,j+1);
        dfs(v,n,m,i,j-1);
        
    }
    int numIslands(vector<vector<char>>& v) {
        int n=v.size();
        int m=v[0].size();
       
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]=='1')
                {
                    c++;
                    dfs(v,n,m,i,j);
                }
            }
        }
        return c;
        
    }
};