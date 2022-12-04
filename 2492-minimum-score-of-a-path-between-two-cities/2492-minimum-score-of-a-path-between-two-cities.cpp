class Solution
{
public:
void dfs(int i, vector<vector<int>> v[], int n, vector<int> &vis, int &ans)
     {
          vis[i] = 1;
          for (auto it : v[i])
          {
               ans = min(ans, it[1]);

               if (!vis[it[0]])
               {
                    dfs(it[0], v, n, vis,ans);
               }
          }
     }
int minScore(int n, vector<vector<int>> &roads)
     {
          vector<vector<int>> v[n + 1];
          vector<int> vis(n + 1, 0);
          int ans = INT_MAX;
          for (auto it : roads)
          {
               v[it[0]].push_back({it[1], it[2]});
               v[it[1]].push_back({it[0], it[2]});
          }
          dfs(1, v, n, vis, ans);
          return ans;
     }
};
