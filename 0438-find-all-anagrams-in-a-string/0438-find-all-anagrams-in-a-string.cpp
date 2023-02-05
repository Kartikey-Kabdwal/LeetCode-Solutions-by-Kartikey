class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {
            int i = 0, j = 0, n = s.size(), m = p.size();
            unordered_map<char, int> m1, m2;
            for (i = 0; i < m; i++)
            {
                m2[p[i]]++;
            }
            vector<int> v;
            i = 0;
            while (j < n)
            {
                m1[s[j]]++;
                if (j - i + 1 == m)
                {
                    if (m1 == m2)
                    {
                        v.push_back(i);
                    }
                    m1[s[i]]--;
                    if (m1[s[i]] == 0)
                    {
                        m1.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            return v;
        }
};