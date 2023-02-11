class Solution {
public:
    int n, a, b, diameter;
    int start = 0, finish = 0;
    deque<int> ans, temp;
    vector<vector<int>> adjList;

    void dfs(int node, int parent, int length) {
        if (length > diameter) {
            diameter = length;
            a = node;
            ans = temp;
        }
        for (auto it : adjList[node]) {
            if (it == parent) {
                continue;
            }
            temp.push_back(it);
            dfs(it, node, length + 1);
            temp.pop_back();
        }
    }

    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges) {
        adjList.resize(n);
        for (const auto &e : edges) {
            int u = e[0], v = e[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        dfs(0, -1, 0);
        diameter = 0;
        start = a;

        dfs(a, -1, 0);
        finish = a;
        diameter++;
        ans.push_front(start);

        if (ans.size() % 2 == 0) {
            return {ans[(diameter / 2) - 1], ans[diameter / 2]};
        }

        return {ans[diameter / 2]};
    }
};
