class Solution {
public:
 int numDecodings(string s) {
     int n = s.size();
        vector<int>dp(n+1,-1);
        return s.empty() ? 0: calc(0,s,dp);    
    }
    int calc(int p, string& s,vector<int>&dp) {
        int n = s.size();
        if(p == n) return 1;
        if(dp[p]!=-1)
        {
            return dp[p];
        }
        if(s[p] == '0') 
        {
            return 0; // sub string starting with 0 is not a valid encoding
        }
        int res = calc(p+1,s,dp);
        if( p < n-1 && (s[p]=='1'|| (s[p]=='2'&& s[p+1]<'7'))) 
        {
            res += calc(p+2,s,dp);
        }
        return dp[p]=res;
    }

};