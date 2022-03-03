class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        
        int n=a.size();
        if(n<=2)
        {
            return 0;
        }
        int c=0;
        vector<int>v(n,0);
        v[0]=v[1]=0;
        for(int i=2;i<n;i++)
        {
            if(a[i-1]-a[i-2]==a[i]-a[i-1])
            {
                v[i]=1+v[i-1];
                c+=v[i];
            }
        }
        
        return c;
        
    }
};