class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{' or s[i]=='(' or s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' and !st.empty() and st.top()=='(')
            {
               st.pop();
            }
            else if(s[i]=='}' and !st.empty() and st.top()=='{')
            {
               st.pop();
            }
            else if(s[i]==']' and !st.empty() and st.top()=='[')
            {
               st.pop();
            }
            else
            {
                return false;
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
        
    }
};