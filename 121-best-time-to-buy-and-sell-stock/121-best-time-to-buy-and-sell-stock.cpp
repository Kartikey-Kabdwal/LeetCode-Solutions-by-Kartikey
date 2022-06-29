class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int profit=0;
       
        
        int m=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<m)
            {
                m=v[i];
                continue;
            }
            else
            {
                profit=max(v[i]-m,profit);
            }
        }
        return profit;
        
        
    }
};