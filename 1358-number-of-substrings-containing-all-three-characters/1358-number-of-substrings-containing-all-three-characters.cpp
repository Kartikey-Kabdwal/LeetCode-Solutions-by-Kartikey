class Solution {
public:
     int calc(string &v, int k)
        {
            int i = 0, j = 0;
            int ans = 0;
            int n=v.size();
            unordered_map<char, int> m;
            while (j < n)
            {
                m[v[j]]++;
                while (m.size() > k)
                {
                    m[v[i]]--;
                    if (m[v[i]] == 0)
                    {
                        m.erase(v[i]);
                    }
                    i++;
                }
                ans += j - i + 1;

                j++;
            }
            return ans;
        }
    int numberOfSubstrings(string s) {
        
        return calc(s,3)-calc(s,2);
        
    }
};