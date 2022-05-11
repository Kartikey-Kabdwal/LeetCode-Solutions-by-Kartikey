class Solution {
public:
    int totalFruit(vector<int>& v) {
        int n=v.size();
        int i=0,j=0;
        unordered_map<int,int>m;
        int len=0;
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
            if(m.size()<=2)
            {
                len=max(len,j-i+1);
            }
            j++;
        }
        return len;
    }
};