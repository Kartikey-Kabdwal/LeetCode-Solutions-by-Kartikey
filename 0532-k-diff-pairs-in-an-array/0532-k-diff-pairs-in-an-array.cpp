class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        
        unordered_map<int,int>s;
        for(int i=0;i<v.size();i++)
        {
            s[v[i]]++;
            
        }
        int c=0;
        if(k==0)
        {
            for(auto it:s)
            {
                if(it.second>1)
                {
                    c++;
                }
            }
            return c;
        }
        
        set<pair<int,int>>m;
        for(int i=0;i<v.size();i++)
        {
            if(s[v[i]+k]>=1)
            {
                m.insert({v[i],v[i]+k});
            }
        }
        return m.size();
        
    }
};