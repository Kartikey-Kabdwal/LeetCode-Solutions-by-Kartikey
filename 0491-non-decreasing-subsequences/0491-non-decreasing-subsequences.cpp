class Solution {
public:
    void calc(int i,int n,int prev,vector<int>&v,vector<vector<int>>&ans,vector<int>temp)
    {
        if(temp.size()>1)
        {
            ans.push_back(temp);
        }
        if(i>=n)
        {
            return;
        }
        if(v[i]>=prev)
        {
            temp.push_back(v[i]);
            calc(i+1,n,v[i],v,ans,temp); 
            temp.pop_back();
        }
         calc(i+1,n,prev,v,ans,temp);
        
        
    }
    vector<vector<int>> findSubsequences(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>ans;
        
    calc(0,n,INT_MIN,v,ans,{});
        set<vector<int>>s;
        for(auto it:ans)
        {
            s.insert(it);
        }
        ans.clear();
        for(auto it:s)
        {
            ans.push_back(it);
        }
        
        return ans;
        
        
        
    }
};