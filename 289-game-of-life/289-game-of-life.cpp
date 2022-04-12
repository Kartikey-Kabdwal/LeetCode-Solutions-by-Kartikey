class Solution {
public:
    void gameOfLife(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        vector<vector<int>> ans(n);
        for(int u=0;u<n;u++){
            for(int j=0;j<m;j++){
                int one = 0, zero = 0;
                // upper left
                if(u-1>=0 && j-1>=0 && a[u-1][j-1]==1) one++;
                else if(u-1>=0 && j-1>=0) zero++;
                // upper
                if(u-1>=0 && a[u-1][j]==1)one++;
                else if(u-1>=0)zero++;
                // upper right
                if(u-1>=0 && j+1<m && a[u-1][j+1]==1)one++;
                else if(u-1>=0 && j+1<m) zero++;
                // right
                if(j+1<m && a[u][j+1]==1)one++;
                else if(j+1<m)zero++;
                // down right
                if(j+1<m && u+1<n && a[u+1][j+1]==1)one++;
                else if(j+1<m && u+1<n) zero++;
                // down
                if(u+1<n && a[u+1][j]==1)one++;
                else if(u+1<n) zero++;
                // down left
                if(u+1<n && j-1>=0 && a[u+1][j-1]==1)one++;
                else if(u+1<n && j-1>=0) zero++;
                // left
                if(j-1>=0 && a[u][j-1]==1)one++;
                else if(j-1>=0) zero++;
                //  updating
                if(a[u][j]==1){
                    if(one==2 || one==3)ans[u].push_back(1);
                    else ans[u].push_back(0);
                }
                else{
                    if(one==3) ans[u].push_back(1);
                    else ans[u].push_back(0);
                }
            }
        }
        // Done ):
        a = ans;
    }
};