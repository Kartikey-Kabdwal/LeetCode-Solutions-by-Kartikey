
class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        int k=accumulate(v.begin(),v.end(),0);
         if(x>k) return -1;
        k-=x;
        int i=0,j=0;
        int f=0;
        int sum=0;
        int ans=0;
        int n=v.size();
       
        while(j<n)
        {
            sum+=v[j];
            while(sum>k)
            {
                sum-=v[i];
                i++;
            }
            if(sum==k)
            {
                f=1;
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return f==0?-1:n-ans;
        
    }
};