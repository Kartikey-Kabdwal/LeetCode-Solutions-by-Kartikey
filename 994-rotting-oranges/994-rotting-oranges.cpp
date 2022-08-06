class Solution {
public:
	int orangesRotting(vector<vector<int>>& grid) {
		int row = grid.size();
		int col = grid[0].size();
		queue<pair<int,int> > q;
		bool onePresent = false;

		for(int i=0; i<row; ++i)
			for(int j=0; j<col; ++j)
				if(grid[i][j] == 2)
					q.push({i,j});
				else if(grid[i][j] == 1)
					onePresent = true;

		if(q.empty() && !onePresent) return 0;
        int c=-1,ans=0;
        while(!q.empty())
        {
            ++c;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
            auto it=q.front();
            q.pop();
            
            if(it.first>0 and grid[it.first-1][it.second]==1 )
            {
                q.push({it.first-1,it.second});
                grid[it.first-1][it.second]=2;
            }
            if(it.first<row-1 and grid[it.first+1][it.second]==1 )
            {
                q.push({it.first+1,it.second});
                grid[it.first+1][it.second]=2;
            }
            if(it.second>0 and grid[it.first][it.second-1]==1 )
            {
                q.push({it.first,it.second-1});
                grid[it.first][it.second-1]=2;
            }
            if(it.second<col-1 and grid[it.first][it.second+1]==1 )
            {
                q.push({it.first,it.second+1});
                grid[it.first][it.second+1]=2;
            } 
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return c;
    }
};

