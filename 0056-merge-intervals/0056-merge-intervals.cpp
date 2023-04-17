class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        int n=v.size();
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        ans.push_back(v[0]);
        
        for(int i=1;i<n;i++)
        {
            if(v[i][0]<=ans.back()[1])
            {
                ans.back()[1]=max(v[i][1],ans.back()[1]);  
            }
            else
            {
                ans.push_back(v[i]);
            }
        }
        return ans;
        
        
        
    }
};