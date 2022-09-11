class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int sum=0;
        int x=v[0];
        int n=v.size();
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1]>0)
            {
                sum+=v[i]-v[i-1];
            }
        }
        return sum;
        
            
        
        
    }
};