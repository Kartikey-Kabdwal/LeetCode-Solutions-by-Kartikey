class Solution {
public:
    static bool func1(vector<int>a,vector<int>b)
    {
       return a[1]-a[0]>b[1]-b[0];       
    }
    int twoCitySchedCost(vector<vector<int>>& v) {
        int c=0;
        int n=v.size()/2;
        
        sort(v.begin(),v.end(),func1);
        for(int i=0;i<v.size();i++)
        {
            if(i<n)
            {
                c+=v[i][0];
            }
            else
            {
                c+=v[i][1];
            }
        }
        return c;
          
    }
};