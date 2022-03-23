class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& v) {
        int temp=INT_MAX;
        int d=INT_MAX;
        int pos=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i][0]==x or v[i][1]==y)
            {
                 temp=abs(x-v[i][0]) + abs(y-v[i][1]);
                    if(temp<d)
                    {
                        d=temp;
                        pos=i;
                    }
            } 
        }
        return pos;
        
    }
};