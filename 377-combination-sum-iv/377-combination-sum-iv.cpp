class Solution {
public:
    int res = 0;
    int combinationSum4(vector<int>& nums, int target) 
    {
        vector<uint64_t> dp(target + 1, 0);
        dp[0] = 1;
        for (int j = 1; j <= target; ++j)
            for (int x : nums)
                dp[j] += j >= x ? dp[j - x] : 0;
        return dp.back();
    }
};
