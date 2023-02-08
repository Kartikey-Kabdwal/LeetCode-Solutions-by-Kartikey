class Solution {
public:
    long long int calc(vector<int>&v,int n,int i,vector<long long int>&memo)   
    {
        if(i>=n)
        {
            return 0;
        }
        if(memo[i]!=-1)
        {
            return memo[i];
        }
        long long int t=INT_MAX;
        
        for(int j=1;j<=v[i];j++)
        {
            t=min(t,1+calc(v,n,i+j,memo));
        }
        return memo[i]=t;
       
    }
    int jump(vector<int>& v) {
        
        int n=v.size();
        int t=INT_MAX;
        vector<long long int>memo(n+1,-1);
        return calc(v,n-1,0,memo);
        
    }
};