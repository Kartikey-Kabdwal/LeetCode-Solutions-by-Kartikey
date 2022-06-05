class Solution {
public:
    int minMaxGame(vector<int>& v) {
        
        int n=v.size();
        if(n==1)
        {
            return v[0];
        }
        vector<int>a(n/2);
        for(int i=0;i<n/2;i++)
        {
            if(i%2==0)
            {
                a[i]=min(v[2 * i], v[2 * i + 1]);
            }
            else
            {
                a[i]=max(v[2 * i], v[2 * i + 1]);
            }
        }
        int x=minMaxGame(a);
        return x;
        
        
    }
};