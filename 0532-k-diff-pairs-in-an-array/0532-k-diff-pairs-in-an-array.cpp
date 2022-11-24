class Solution {
public:
    int findPairs(vector<int> &v, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    int count = 0;
    for (auto it : mp)
    {
        if (k == 0 && (it.second >= 2))
        {
            count++;
        }
        if (k > 0 && mp.find(it.first + k) != mp.end())
        {
            count++;
        }
    }
    return count;
}


};