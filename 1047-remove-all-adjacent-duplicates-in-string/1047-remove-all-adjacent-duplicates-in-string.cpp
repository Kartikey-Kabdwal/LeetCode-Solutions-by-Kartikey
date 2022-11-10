class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int f=0;
            for(int i=0;i<s.size();i++)
        {
                f=0;
            while(!st.empty() and s[i]==st.top())
            {
                f=1;
                st.pop();           
            }
                if(f==0)
                {
            st.push(s[i]);  
                }
            
        }
        
        string ans="";
                
        while(!st.empty())
        {
            
            ans+=st.top();
            
            st.pop();
            
        }

        reverse(ans.begin(),ans.end());
        
        return ans;

    }
};