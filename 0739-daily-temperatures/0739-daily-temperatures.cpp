class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &v)
        {
            stack<pair<int, int>> s;
            int n = v.size();
            vector<int> ans(n,0);
            for (int i = 0; i < n; i++)
            {
                
                while (!s.empty() and v[i] > s.top().first)
                {
                    ans[s.top().second] = i - s.top().second;
                    s.pop();
                      
                }
              
                s.push({ v[i],i });
            }
            while (!s.empty())
            {
                ans[s.top().second] = 0;
                s.pop();
            }
            return ans;
        }
};