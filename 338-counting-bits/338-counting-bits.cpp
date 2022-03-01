class Solution {
public:
    vector<int> countBits(int n) {
        int c=0;
        vector<int>v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                v[i]=1+v[i/2]; 
            }
            else
            {
                v[i]=v[i/2];
            }
        }
        return v;
    }
};