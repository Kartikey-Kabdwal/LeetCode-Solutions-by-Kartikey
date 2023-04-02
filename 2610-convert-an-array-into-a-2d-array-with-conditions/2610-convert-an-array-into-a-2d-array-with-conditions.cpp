class Solution
{
    public:
        vector<vector < int>> findMatrix(vector<int> &v)
        {
            unordered_map<int, int> m;
            for (auto it: v)
            {
                m[it]++;
            }
            vector<vector < int>> ans;
            int f = 1;
            while (f)
            {
                f = 0;
                vector<int> tmp;
                for (auto it: m)
                {
                    if (m[it.first] != 0)
                    {
                        tmp.push_back(it.first);
                        f += it.second;
                        m[it.first]--;
                    }
                }
                if(tmp.size()){
                ans.push_back(tmp);
                }
            }
        
            return ans;
        }
};