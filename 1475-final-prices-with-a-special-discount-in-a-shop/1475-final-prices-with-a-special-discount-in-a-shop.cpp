class Solution {
public:
    vector<int> finalPrices(vector<int>& v) {
        int n=v.size();
        vector<int>ans(n);
        vector<int>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() and v[i]<=v[s.back()])
            {
                v[s.back()]=v[s.back()]-v[i];
                
                s.pop_back();
            }
            s.push_back(i);
        }
        
        return v;
        
    }
};