class Solution {
public:
    int fib(int n) {
        if(n==0 or n==1)
        {
            return n;
        }
        vector<int>v(n);
        
        v[0]=1,v[1]=1;
        for(int i=2;i<n;i++)
        {
        
            v[i]=v[i-1]+v[i-2];
        }
        return v[n-1];
        
    }
};