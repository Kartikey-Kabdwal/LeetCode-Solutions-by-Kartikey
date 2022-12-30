class Solution {
public:
    
    void dfs(int i,int n,vector<int>temp,vector<vector<int>>&ans,vector<vector<int>>&g)
    {
        if(i==n)
        {
            temp.push_back(i);
            ans.push_back(temp);
            return;
        }
        cout<<i<<endl;
        temp.push_back(i);
        for(auto it:g[i])
        {
        dfs(it,n,temp,ans,g);
        }
        temp.pop_back();
        return;
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        int n=g.size();
        
        vector<int>temp;
        vector<vector<int>>ans;
        dfs(0,n-1,temp,ans,g);
        return ans;
        
    }
};