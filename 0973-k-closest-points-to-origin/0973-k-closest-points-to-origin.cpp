class Solution {
public:
    static bool func(vector<int>a,vector<int>b)
    {
         int x=(a[0]*a[0])+(a[1]*a[1]);
         int y=(b[0]*b[0])+(b[1]*b[1]);
        return x<y;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        sort(v.begin(),v.end(),func);
        vector<vector<int>>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i]);
        }
        return ans;
        
        
    }
};