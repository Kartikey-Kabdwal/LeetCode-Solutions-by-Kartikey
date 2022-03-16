class Solution {
public:
    int minAddToMakeValid(string s) {
        int a,b;
        a=b=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')' and !st.empty() and  st.top()=='(')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        return st.size();
        
        
    }
};