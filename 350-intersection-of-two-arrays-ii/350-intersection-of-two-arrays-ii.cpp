class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        
        
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;  
        }
        vector<int>v;
        for(int i=0;i<b.size();i++)
        {
            if(m[b[i]])
            {
                v.push_back(b[i]);
                m[b[i]]--;
            }
        }
        return v;
        
        
        
    }
};