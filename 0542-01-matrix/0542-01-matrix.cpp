class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& v) {

        int n=v.size();
        int m=v[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
         int drow[]={-1,0,1,0};
         int dcol[]={0,-1,0,1};

        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            q.pop();
            ans[r][c]=d;
            for(int i=0;i<4;i++)
            {
                int nr=r+drow[i];
                int nc=c+dcol[i];

                if(nr>=0 and nc>=0 and nr<n and nc<m and vis[nr][nc]==0)
                {

                    q.push({{nr,nc},d+1});
                    vis[nr][nc]=1;

                }
                
            }

        }

        return ans;


        
    }
};