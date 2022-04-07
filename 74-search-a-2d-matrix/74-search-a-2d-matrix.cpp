class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int k) {
        
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                ans.push_back(v[i][j]);
            }
        }
        int start=0,end=ans.size()-1,mid=(start+end)/2;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(ans[mid]==k)
            {
                return true;
            }
            else if(ans[mid]<k)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return 0;
        
    }
};