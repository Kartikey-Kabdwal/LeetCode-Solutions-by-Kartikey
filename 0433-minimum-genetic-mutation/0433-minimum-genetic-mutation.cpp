class Solution {
public:
    int minMutation(string start, string end, vector<string> &bank) {
        unordered_set<string> s(bank.begin(), bank.end());
        queue<pair<string, int>> q;
        unordered_set<string> visited;
        q.push({start, 0});
        visited.insert(start);

        vector<char> dis = {'A', 'C', 'G', 'T'};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            if (it.first == end) {
                return it.second;
            }
            if (it.second >= bank.size()) {
                return -1;
            }
            string temp = it.first;
            for (int i = 0; i < 8; i++) {
                char tmp = temp[i];
                for (int j = 0; j < 4; j++) {
                    temp[i] = dis[j];
                    if (s.count(temp) && dis[j] != tmp && !visited.count(temp)) {
                        q.push({temp, it.second + 1});
                        visited.insert(temp);
                    }
                    temp[i] = tmp;
                }
            }
        }
        return -1;
    }
};
