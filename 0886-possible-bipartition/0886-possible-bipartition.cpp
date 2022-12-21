class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // Create an adjacency list representation of the graph
        vector<vector<int>> adj(n);
        for (const auto& dislike : dislikes) {
            adj[dislike[0] - 1].push_back(dislike[1] - 1);
            adj[dislike[1] - 1].push_back(dislike[0] - 1);
        }

        // Initialize the color of each node to -1 (uncolored)
        vector<int> color(n, -1);

        // Iterate over all the nodes in the graph
        for (int i = 0; i < n; i++) {
            // If the node has not been colored, try to color it
            if (color[i] == -1) {
                // Perform a depth-first search from this node
                if (!dfs(adj, color, i, 0)) {
                    // If the coloring fails, return false
                    return false;
                }
            }
        }

        // If we reach this point, it means we were able to color the graph
        // using only two colors, so we return true
        return true;
    }

private:
    bool dfs(const vector<vector<int>>& adj, vector<int>& color, int u, int c) {
        // Assign the color c to the node u
        color[u] = c;

        // Iterate over all the neighbors of u
        for (int v : adj[u]) {
            // If the neighbor has not been colored, try to color it with
            // the opposite color of u
            if (color[v] == -1 && !dfs(adj, color, v, 1 - c)) {
                return false;
            }
            // If the neighbor has been colored with the same color as u,
            // it means we cannot color the graph, so we return false
            if (color[v] == c) {
                return false;
            }
        }

        // If we reach this point, it means we were able to color all the
        // neighbors of u, so we return true
        return true;
    }
};
