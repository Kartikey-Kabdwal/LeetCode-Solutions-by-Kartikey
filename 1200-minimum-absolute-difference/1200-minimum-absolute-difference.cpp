class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        
        sort(v.begin(),v.end());
        int k=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            k=min(v[i]-v[i-1],k);
        }
        vector<vector<int>>ans;
        
        for(int i=1;i<v.size();i++ )
        {
            if(v[i]-v[i-1]==k)
            ans.push_back({v[i-1],v[i]});
        }
        return ans;
        
        
    }
};