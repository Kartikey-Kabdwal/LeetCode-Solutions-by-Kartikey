class Solution {
public:
    
    void calc(int i,int open,int close,vector<string>&ans,string temp)
    {
        
        if(!open and !close)
        {
            ans.push_back(temp);
            return;
        }
        
        if(open)
        {
             calc(i+1,open-1,close,ans,temp+'(');
        }
         if(close and close>open)
        {
             calc(i+1,open,close-1,ans,temp+')');
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        
        
        vector<string>ans;
        
         calc(0,n,n,ans,"");
        return ans;
        
        
        
        
        
    }
};