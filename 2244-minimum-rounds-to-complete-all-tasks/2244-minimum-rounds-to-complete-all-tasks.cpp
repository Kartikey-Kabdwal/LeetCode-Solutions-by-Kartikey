class Solution {
public:
    int count(int n,unordered_map<int,int>&dp)
    {
        if(n<0)
        {
            return 1e9;
        }
        if(n==0)
        {
            return 0;
        }
        if(dp.find(n)!=dp.end())
        {
          
            return dp[n];
        }
       
        return dp[n]=1+min(count(n-2,dp),count(n-3,dp));
    }
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        
        unordered_map<int, int> m;
        unordered_map<int,int>dp;
  for (int i = 0; i < n; i++) {
    m[tasks[i]]++;
  }
        int ans=0;
        for(auto it:m)
        {
            if(it.second==1)
            {
                return -1;
            }
            ans+=count(it.second,dp);
            
        }
        
        return ans;

 

        
    }
};