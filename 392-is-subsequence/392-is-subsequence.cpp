class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)
        {
            return true;
        }
        
        int x=s.size();
        int n=s.size();
        int m=t.size();
        int p=0;
        
        for(int i=0;i<m;i++)
        {
            if(t[i]==s[p])
            {
                p++;
                x--;    
            }
            if(x==0)
            {
                return true;
            }
            
        }
        return false;
        
    }
};