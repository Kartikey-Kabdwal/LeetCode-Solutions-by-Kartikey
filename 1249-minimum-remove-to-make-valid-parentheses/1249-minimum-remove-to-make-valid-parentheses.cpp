class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<int> stk;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(i);
            }
            else if(s[i] == ')') 
            {
                if(stk.size()==0)
                {
                    s[i] = '.'; 
                }
                else
                {
                    stk.pop(); 
                }
            }
        }
        
        
        while(stk.size() >0)
        {
            s[stk.top()] = '.';
            stk.pop();
        }
        
        
        string res="";
        for(auto x : s)
        {
            if(x != '.')
            {
                res +=x;
            }
            
        }
        
        return res;
        
    }
};