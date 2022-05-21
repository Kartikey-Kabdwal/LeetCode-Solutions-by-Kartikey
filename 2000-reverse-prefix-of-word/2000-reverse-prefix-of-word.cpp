class Solution {
public:
    string reversePrefix(string s, char c) {
        int i=0,f=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            return s;
        }
        reverse(s.begin(),s.begin()+i+1);
        return s;
        
    }
};