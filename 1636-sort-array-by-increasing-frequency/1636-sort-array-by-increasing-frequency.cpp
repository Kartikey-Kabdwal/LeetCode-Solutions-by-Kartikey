class Solution {
public:
    static bool func(pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second)
        {
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& v) {
        unordered_map<int,int>m;
        
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
       
        vector<pair<int,int>>mp(m.begin(),m.end());
        sort(mp.begin(),mp.end(),func);
        
        vector<int>ans;
        int i=0;
        for(auto it:mp)
        {
            i=0;
            while(i<it.second)
            {
                ans.push_back(it.first);
                i++;
            }
            
            
        }
        return ans;
        
          
    }
};