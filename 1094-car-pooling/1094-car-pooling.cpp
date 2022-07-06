class Solution {
public:
    vector<int> func(vector<vector<int>>trips)
    {
        vector<int>v(1001,0);
        for(int i=0;i<trips.size();i++)
        {
            v[trips[i][1]]+=trips[i][0];
            v[trips[i][2]]-=trips[i][0];
        }
        return v;
    }
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<int>v=func(trips);
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            c+=v[i];
            if(c>capacity)
            {
                return false;
            }
        }
        return true;
        
        
        
        
    }
};