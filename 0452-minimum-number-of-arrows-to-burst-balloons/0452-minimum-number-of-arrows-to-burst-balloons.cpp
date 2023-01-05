class Solution {
public:
    static bool func(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& v) {
        
        sort(v.begin(),v.end(),func);
        int c=1;
        int temp=v[0][1];
        // for(auto it:v)
        // {
        //     cout<<it[0]<<" "<<it[1]<<", ";
        // }
        for(int i=1;i<v.size();i++)
        {
            if(v[i][0]<=temp)
            {
                continue;
            }
            else
            {
                c++;
                temp=v[i][1];
            }
            
            
        }
        return c;
        
        
        
    }
};