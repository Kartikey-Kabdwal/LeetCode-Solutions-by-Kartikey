class Solution {
public:
    static bool func(vector<int>&a,vector<int>&b)
    {
        
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),func);
        int n=v.size();
        int i=0,j=1,c=1;
       while(j<n)
       {
           if(v[i][1]<v[j][0])
           {
               c++;
               i=j;
               j++;
           }
           else
           {
               j++;
           }
       }
        return c;
        
    }
};