class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      
        vector<int> dir={-1,0,1,0,-1}; 
      
        int fresh=0;
     
        int n=grid.size();
        int m=grid[0].size();
       
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                   
                }
                if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        int ans=-1;
        while(!q.empty())
        {
            int k=q.size();
           
            for(int i=0;i<k;i++)
            {
               
               auto p=q.front();
                 q.pop();
                for(int j=0;j<4;j++)
                {
                     int r=p.first+dir[j];
                     int c=p.second+dir[j+1];
                    
                    if(r>=0 and c>=0 and r<n and c<m and grid[r][c]==1)
                    {
                        grid[r][c]=2;
                        fresh--;
                        q.push({r,c});
                    } 
                }
                
                 
            }
             ans++;
        }
         if(fresh>0) return -1; //if fresh>0 that means there are fresh oranges left
        if(ans==-1) return 0; //we initialised with -1, so if there were no oranges it'd take 0 mins.
        return ans;
        
        
        
    }
};