class Solution {
public:
    
    int count(int k, vector<int>& v,int n,int i,vector<vector<int>>&memo)
    {
        if(k==0)
        {
            return 1;
        }
        if(i==n)
        {
            return 0;
        }
        if(memo[i][k]!=-1)
        {
            return memo[i][k];
        }
        int reject=count(k,v,n,i+1,memo);
        int accept=0;
        if(k>=v[i])
        {
            accept=count(k-v[i],v,n,i,memo);
        }
        return memo[i][k]=accept+reject;
    }
    
    
    int change(int k, vector<int>& v) {
        int n=v.size();
        vector<vector<int>>memo(n+1,vector<int>(k+1,-1));
        return count(k,v,n,0,memo);
        
        
    }
};