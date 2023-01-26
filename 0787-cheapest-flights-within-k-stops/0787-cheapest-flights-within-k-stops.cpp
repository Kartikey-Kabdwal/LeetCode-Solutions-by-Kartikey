class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<pair<int, int>> adj[n];
    for (int i = 0; i < flights.size(); i++)
    {
        int u = flights[i][0];
        int v = flights[i][1];
        int cost = flights[i][2];

        adj[u].push_back({v, cost});
    }

    vector<int> distance(n, 1e9);
    distance[src] = 0;

    //{stops,{node,cost}}
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {src, 0}});

    while (!q.empty())
    {
        int stops = q.front().first;
        int node = q.front().second.first;
        int dis = q.front().second.second;
        q.pop();

        if (stops > K)
        {
            continue;
        }
        for (auto it : adj[node])
        {
            int adjnode = it.first;
            int wt = it.second;

            if (wt + dis < distance[adjnode] and stops <= K)
            {
                q.push({stops + 1, {adjnode, wt + dis}});
                distance[adjnode] = wt + dis;
            }
        }
    }

    if (distance[dst] == 1e9)
    {
        return -1;
    }
    return distance[dst];
    }

};