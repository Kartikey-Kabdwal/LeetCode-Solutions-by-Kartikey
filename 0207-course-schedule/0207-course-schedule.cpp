class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // Create a graph with the courses as vertices and the prerequisites as edges
    unordered_map<int, vector<int>> graph;
    for (const auto& p : prerequisites) {
        graph[p[0]].push_back(p[1]);
    }

    // Create a vector to store the indegree of each course
    vector<int> indegree(numCourses, 0);
    for (const auto& p : graph) {
        for (const auto& v : p.second) {
            indegree[v]++;
        }
    }

    // Create a queue to store the courses with no dependencies (indegree = 0)
    queue<int> q;
    for (int i = 0; i < numCourses; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    // Perform a topological sort
    int count = 0;
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        count++;

        // Decrease the indegree of the courses that depend on the current course
        for (const auto& v : graph[course]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }

    // If all courses were visited, it means that it is possible to finish all the courses
    return count == numCourses;
        
    }
};