class Solution {

vector<int> parent;
vector<int> size;
public:
int find(int u)
{
  if (u == parent[u])
     return u;

  else
     return parent[u] = find(parent[u]);
}
void combine(int u, int v)
{
  u = find(u);
  v = find(v);
  if (u == v)
  {
     return;
  }
  else
  {
     if (size[u] > size[v])
     {
       parent[v] = u;
       size[u] += size[v];
     }
     else
     {
       parent[u] = v;
        size[v] += size[u];
     }
  }
}

    int makeConnected(int n, vector<vector<int>>& connections) {
        parent.resize(n);
        size.resize(n,1);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
        int extra=0;
        for(auto it:connections)
        {
            if(find(it[0])==find(it[1]))
            {
                extra++;
            }
            combine(it[0],it[1]);
        }
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(find(parent[i]));
            
        }
        int sz=s.size();
        int need=sz-1;
        if(need==0)
        {
            return 0;
        }
        if(need>extra)
        {
            return -1;
        }
        return need;           
    }
};