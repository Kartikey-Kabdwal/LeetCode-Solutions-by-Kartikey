class Solution {
public:
    const int MOD = 1e9 + 7;

int dfs(int target, int type, vector<vector<int>>& types, vector<vector<int>>& memo) {
    if (target == 0) {
        return 1;
    }
    if (type == types.size() || target < 0) {
        return 0;
    }
    if (memo[target][type] != -1) {
        return memo[target][type];
    }
    int count = 0;
    int counti = types[type][0], marksi = types[type][1];
    for (int i = 0; i <= counti && target - i * marksi >= 0; i++) {
        count = (count + dfs(target - i * marksi, type + 1, types, memo)) % MOD;
    }
    memo[target][type] = count;
    return count;
}

int waysToReachTarget(int target, vector<vector<int>>& types) {
    int n = types.size();
    vector<vector<int>> memo(target + 1, vector<int>(n, -1));
    return dfs(target, 0, types, memo);
}

};