class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]=='R'?1:-1;
            if(!sum)
            {
                c++;
            }
        }
        return c;
    }
};