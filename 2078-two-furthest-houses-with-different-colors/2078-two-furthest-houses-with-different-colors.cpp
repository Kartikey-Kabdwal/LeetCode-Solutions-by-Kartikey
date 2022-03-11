class Solution {
public:
    int maxDistance(vector<int>& v) {
        int n=v.size();
        int x=v[0];
        int y=v[n-1];
        for(int i=n-1;i>=1;i--)
        {
            if(x!=v[i])
            {
                x=i;
                break;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=y)
            {
                y=n-i-1;
                break;
            }
        }
        return max(x,y);
        
    }
};