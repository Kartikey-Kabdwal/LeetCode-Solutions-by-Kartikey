class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        unordered_set<int>s;
        unordered_map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        for(auto it:m)
        {
            if(s.count(it.second))
            {
                return false;
            }
            s.insert(it.second);
        }
        return true;
        
    }
};