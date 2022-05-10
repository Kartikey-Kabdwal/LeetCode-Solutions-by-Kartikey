class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        int bound = 1 << 9;
        for (int i = 0; i < bound; ++i) {
            if (__builtin_popcount(i) == k) {
                vector<int> cur;
                int sum = 0;
                for (int j = 0; j < 9; ++j) {
                    if ((i >> j) & 0x1) {
                        sum += (j + 1);
                        cur.push_back(j + 1);
                    }
                }
                if (sum == n) {
                    ans.push_back(cur);
                }
            }
        }
        return ans;
    }
};