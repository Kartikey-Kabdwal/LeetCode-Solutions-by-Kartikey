class Solution {
public:
    // Time Complexity:- O(nlogn)
    // Space Complexity:- O(n)
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        
        vector<vector<int>> ans = {v[0]};
        
        for(int i=1;i<v.size();i++){
            
            if(v[i][0]>ans.back()[1]) // intervals can't be merged
             {     
                ans.push_back(v[i]);
             }
            else
            {
                ans.back()[1] = max(ans.back()[1],v[i][1]); // intervals can be merged
            }
        }
        return ans;
    }
};