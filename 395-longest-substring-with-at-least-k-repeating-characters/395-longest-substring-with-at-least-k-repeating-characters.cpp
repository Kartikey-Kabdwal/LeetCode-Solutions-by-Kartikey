class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        return helper(s, 0, n-1, k);
    }
private:
    // looking for longest string within index range [l, r]
    int helper(string& s, int l, int r, int k) {
        vector<int> mp(26, 0);
        for (int i = l; i <= r; i++) mp[s[i]-'a']++;
       // check whether the whole string meets requirement
        bool pass = true;
        for (int i = 0; i < 26 && pass; i++) {
            if (mp[i] && mp[i] < k)
                pass = false;
        }
        if (pass) return r-l+1;
        // using all characters with occurrence > 0 && < k to divide the string
        int i = l, ans = 0;
        for (int j = l; j <= r; j++) {
            if (mp[s[j]-'a'] && mp[s[j]-'a'] < k) {
                ans = max(ans, helper(s, i, j-1, k));
                i = j+1;
            }
        }
        return max(ans, helper(s, i, r, k));
    }
};
