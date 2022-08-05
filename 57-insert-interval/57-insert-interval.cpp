class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& k) {
        
        v.push_back(k);
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        int n=v.size();
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