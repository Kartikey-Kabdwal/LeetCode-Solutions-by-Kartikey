class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
         for(int i=0;i<t.size();i++)
        {
            m[t[i]]--;
        }
        int c=0;
        for(auto it:m)
        {
            if(it.second<0)
            {
            c+=abs(it.second);
            }
        }
        return c;
        
    }
};