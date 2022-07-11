class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if(grid[0][0]==1){ return -1; }
        
        int n=grid.size();
        
        queue<pair<int,int>>q;
        
        int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        
        q.push({0,0});
        grid[0][0] = 1;
        int ans = 0;

        
        while(!q.empty())
        {
            ans++;
            int k=q.size();
            
            for(int i=0;i<k;i++)
            {
                auto it=q.front();
                q.pop();
                if(it.first==n-1 and it.second==n-1)
                {
                    return ans;
                }
                for(int j=0;j<8;j++)
                {
                    int xx=it.first+dir[j][0];
                    int yy=it.second+dir[j][1];
                    
                    if (xx >= 0 && yy >= 0 && xx < n && yy < n and grid[xx][yy]==0)
                    {
                        q.push({xx,yy});
                        grid[xx][yy] = 1;
                    }  
                }
            } 
        }
        return -1;

        
        
    }
};