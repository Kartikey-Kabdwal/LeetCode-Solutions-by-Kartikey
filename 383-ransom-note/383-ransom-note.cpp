class Solution {
public:
    bool canConstruct(string a, string b) {
        unordered_map<char,int>m1,m2;
        for(int i=0;i<a.size();i++)
        {
            m1[a[i]]++;
        }
        for(int i=0;i<b.size();i++)
        {
            m2[b[i]]++;
        }
        for(int i=0;i<a.size();i++)
        {
            if(m1[a[i]]>m2[a[i]])
            {
                return false;
            }
        }
        return true;
        
        
    }
};