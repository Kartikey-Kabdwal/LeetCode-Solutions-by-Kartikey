class Solution {
public:
    void calc(stack<int>&st)
    {
        char a,b,c;
        c=st.top();st.pop();
        b=st.top();st.pop();
        a=st.top();st.pop();
        if(a=='a' and b=='b' and c=='c')
        {
            return;
        }
        else
        {
            st.push(a);
            st.push(b);
            st.push(c);
        }
        
    }
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
            if(st.size()>=3)
            {
                calc(st);
            }
        }
        return st.empty();
        
    }
};