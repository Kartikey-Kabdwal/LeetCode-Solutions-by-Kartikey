//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
    int check(int x,int y,vector<vector<int>>& v)
    {
        int n=v.size();
        int m=v[0].size();
        if(x>=0 and  y>=0 and x<n and y<m)
        {
            return 1;
        }
        return 0;
    }
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int ones=0,rott=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        
        int ans=0;
        int dx[]={0,-1,0,1};
        int dy[]={1,0,-1,0};
        
    while(!q.empty())
        {
            int sz=q.size();
    for(int z=0;z<sz;z++)
        {
            auto it=q.front();
            q.pop();
            int x=it.first;
            int y=it.second;
            
            
            for(int i=0;i<4;i++)
            {
                int tx=x+dx[i];
                int ty=y+dy[i];
                if(check(tx,ty,grid) and grid[tx][ty]==1)
                {
                    grid[tx][ty]=2;
                    q.push({tx,ty});
                }
            }
        }
            ans++;
        }
        for(auto it:grid)
        {
            for(auto i:it)
            {
                if(i==1)
                {
                    return -1;
                }
            }
        }
        return ans > 0 ? ans - 1 : 0;
        
       
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends