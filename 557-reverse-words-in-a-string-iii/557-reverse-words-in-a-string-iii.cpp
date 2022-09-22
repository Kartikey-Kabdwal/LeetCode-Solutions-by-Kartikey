class Solution {
public:
    string reverseWords(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+c,s.begin()+i);
                
                c=i+1;
            }
            
        }
        reverse(s.begin()+c,s.end());
        return s;
        
    }
};