class Solution {
public:
    int maximum69Number (int k) {
        
        string s=to_string(k);
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                s[i]='9';
                break;
            }
        }
        k=stoi(s);
        return k;
        
    }
};