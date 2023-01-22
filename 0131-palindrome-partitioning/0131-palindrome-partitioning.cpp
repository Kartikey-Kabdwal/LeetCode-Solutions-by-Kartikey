class Solution {
public:
    int dp[17][17];
    bool isPal(string &s, int start,int end)
    {   
        if(dp[start][end]!=-1)
            return dp[start][end];
        int st=start, e=end;
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {   
                dp[st][e]=0;
                return false;
            }
        }
        dp[st][e]=1;
        return true;
    }
    void divide(string &s, int index, vector<vector<string>> &res,
        vector<string> &path)
    {
        if(index==s.size())
        {
            res.push_back(path);
            return;
        }
        for(int i=index; i<s.size(); i++)
        {
            if(isPal(s, index, i))
            {
                path.push_back(s.substr(index,i-index+1));
                divide(s, i+1, res, path);
                path.pop_back();
            }   
        }
    }
    vector<vector<string>> partition(string s) 
    {       
        memset(dp, -1, sizeof(dp));
        if(s.size()==0)
            return {{}};
        vector<vector<string>>res;
        vector<string>path;
        divide(s, 0, res, path);
        return res;
    }
};