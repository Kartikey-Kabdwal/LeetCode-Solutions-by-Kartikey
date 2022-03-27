class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
        set<pair<int,int>>s;
        for(int i=0;i<v.size();i++)
        {
            int c=accumulate(v[i].begin(),v[i].end(),0);
            s.insert({c,i});
        }
        vector<int>ans;
        for(auto it:s)
        {
            if(!k)
            {
              break;  
            }
            else
            {
               ans.push_back(it.second); 
            }
            k--;
        }
        return ans;
        
        
    }
};