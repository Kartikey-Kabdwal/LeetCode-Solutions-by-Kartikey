class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        unordered_set<int>r,c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }   
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(r.count(i) or c.count(j))
                {
                    v[i][j]=0;
                }
            }   
        }
        
    }
};