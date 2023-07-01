class Solution {
public:

    int f(int i,int j,vector<string> &grid,int n,int m,int target){ 
        int keys = 0;
        queue<vector<int>> q;

        vector<vector<vector<int>>> visited(31,vector<vector<int>>(31,vector<int>(1001,0)));

        q.push({i,j,keys,0});  
        visited[i][j][keys] = 1;


        int ans = 0;

        while(!q.empty()){
            int row = q.front()[0];
            int col = q.front()[1];
            int keys = q.front()[2];
            int steps = q.front()[3];

            q.pop();

            if(keys==target){
                return steps;
            }

            for(int k=0;k<4;k++){
                int dx[4] = {0,1,0,-1};
                int dy[4] = {1,0,-1,0};

                int nrow = row+dx[k];
                int ncol = col+dy[k];

                if(nrow<n && ncol<m && nrow>=0 && ncol>=0){
                    int nkeys = keys;


                    if(grid[nrow][ncol]>='a' && grid[nrow][ncol]<='z'){
                        nkeys|=(1<<(grid[nrow][ncol]-'a'));
                    }

                    if(grid[nrow][ncol]>='A' && grid[nrow][ncol]<='Z'){
                        if(!(nkeys&(1<<((grid[nrow][ncol]-'A'))))){
                            continue;
                        }
                    }
                    if(visited[nrow][ncol][nkeys]==1 || grid[nrow][ncol]=='#'){
                        continue;
                    }

                    visited[nrow][ncol][nkeys] = 1;
                    q.push({nrow,ncol,nkeys,steps+1});
                }
        }
        }

        return -1;
    }

    int shortestPathAllKeys(vector<string>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int target = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>='a' && grid[i][j]<='z'){
                    target|=(1<<(grid[i][j]-'a'));
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='@'){
                    return f(i,j,grid,n,m,target);
                }
            }
        }
        return -1;
    }
};
