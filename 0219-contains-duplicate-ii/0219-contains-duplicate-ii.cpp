class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        
        unordered_map<int,int>m;
        int i=0,j=0;
        int n=v.size();
        while(j<n)
        {
            if(m.find(v[j])!=m.end())
            {
                if(abs(j-m[v[j]])<=k )
                {
                    return true;
                }
            }
            m[v[j]]=j;
            j++;
        }
        return false;
        
    }
};