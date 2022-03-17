class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int n=v.size();
        int j=1;
        int i=0;
        int ans=0;
        if(n==1)
        {
            return 0;
        }
        while(j<n)
        {
            if(v[j]-v[i]<0)
            {
                i=j; 
            }
            else
            {
            ans=max(ans,v[j]-v[i]);
            }
            j++;
        }
        return ans;
        
        
    }
};