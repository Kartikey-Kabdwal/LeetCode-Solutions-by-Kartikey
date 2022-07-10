class Solution {
public:
    void dfs(vector<vector<int>>& v,int i,int j)
    {
        if(i<0 or j<0 or i>=v.size() or j>=v[i].size() or v[i][j]==0)
        {
            return;
        }
        v[i][j]=0;
        dfs(v,i+1,j);
        dfs(v,i-1,j);
        dfs(v,i,j+1);
        dfs(v,i,j-1);
    }
    int numEnclaves(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==1 and (i==0 or j==0 or i==n-1 or j==m-1))
                {
                    dfs(v,i,j);
                }
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==1)
                {
                    
                    count++;
                }
            }
        }
        return count;
        
    }
};