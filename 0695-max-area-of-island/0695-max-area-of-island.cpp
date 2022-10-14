class Solution {
public:
    int dfs(vector<vector<int>>& v,int i,int j)
    {
        if(i>=v.size() or i<0 or j<0 or j>=v[0].size() or v[i][j]==0)
        {
            return 0;
        }
       
        v[i][j]=0;
        return 1+
            dfs(v,i+1,j)+
            dfs(v,i-1,j)+
            dfs(v,i,j+1)+
            dfs(v,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& v) {
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==1)
                {
                    ans=max(ans,dfs(v,i,j));
                }
            }
        }
        return ans;
        
    }
};