class Solution {
public:
   
    static bool func(vector<int>a,vector<int>b)
    {
        
        if(a[0]==b[0])
        {
            return a[1]<b[1];
        }
 
            return a[0]<b[0];
        
    }
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),func);
       vector<vector<int>>ans;
        ans.push_back(v[0]);
        for(int i=1;i<v.size();i++)
        {
           if(ans.back()[1]<v[i][0])
           {
               ans.push_back(v[i]);
           }
            else
            {
                ans.back()[1]=max(ans.back()[1],v[i][1]);
            }  
        }
        return ans;
        
        
    }
};