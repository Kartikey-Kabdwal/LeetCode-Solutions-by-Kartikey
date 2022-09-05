class Solution {
public:
  
    bool ispal(string &s,int i,int j)
    {
        while(i<j)
        {
            if(s[i++]!=s[j--])
            {
                return false;
            }
        }
        return true;
    }
    int count(string &s,int i,int j,vector<vector<int>>&memo)
    {
        if(i>=j)
        {
            return memo[i][j] = 0;
        }
        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }
        if(ispal(s,i,j))
        {
            return memo[i][j]=0;
        }
  int ans=INT_MAX;
        for(int k=i;k<j;k++)
        {
            if(ispal(s,i,k)==false)
            { continue;
            }

            int temp=1+count(s,i,k,memo)+count(s,k+1,j,memo);
            ans=min(temp,ans);
            
        }
        return memo[i][j]=ans;
        
    }
    int minCut(string s) {
        int n=s.size();
        vector<vector<int>>memo(n+1,vector<int>(n+1,-1));
        return count(s,0,n-1,memo);
        
        
    }
};