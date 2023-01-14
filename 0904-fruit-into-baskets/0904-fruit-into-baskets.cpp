class Solution {
public:
    int totalFruit(vector<int>& v) {
        unordered_map<int,int>m;
        int i=0,n=v.size(),j=0;
        int ans=0;
        while(j<n)
        {
            m[v[j]]++;
            while(m.size()>2)
            {
                m[v[i]]--;
                if(m[v[i]]==0)
                {
                    m.erase(v[i]);
                }
                i++;
                
            }
            ans=max(ans,j-i+1);
            j++;
            
            
        }
        
        return ans;
        
    }
};