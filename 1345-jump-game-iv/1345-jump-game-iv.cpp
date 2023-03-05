class Solution {
public:
    int minJumps(vector<int>& arr) {
    int n = arr.size();
    if(n == 1) return 0; // if there's only one element, no jump is needed
    
    unordered_map<int, vector<int>> indices;
    for(int i = 0; i < n; i++) indices[arr[i]].push_back(i); // store indices of same values
    
    queue<int> q;
    q.push(0); // start from index 0
    vector<bool> visited(n, false);
    visited[0] = true;
    int jumps = 0;
    
    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            int curr = q.front();
            q.pop();
            if(curr == n - 1) return jumps; // if reached the last index, return number of jumps
            if(curr + 1 < n && !visited[curr + 1]) {
                visited[curr + 1] = true;
                q.push(curr + 1);
            }
            if(curr - 1 >= 0 && !visited[curr - 1]) {
                visited[curr - 1] = true;
                q.push(curr - 1);
            }
            for(int index : indices[arr[curr]]) { // visit all indices with same value
                if(!visited[index]) {
                    visited[index] = true;
                    q.push(index);
                }
            }
            indices[arr[curr]].clear(); // clear visited indices to avoid revisiting
        }
        jumps++;
    }
    return -1; // if not possible to reach the last index, return -1
}
};