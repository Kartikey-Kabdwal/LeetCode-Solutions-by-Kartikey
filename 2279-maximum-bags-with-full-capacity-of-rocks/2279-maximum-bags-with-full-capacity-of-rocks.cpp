class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int k) {
        
        int n=capacity.size();
        for(int i=0;i<n;i++)
        {
            capacity[i]-=rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(capacity[i]<=k)
            {
                k-=capacity[i];
                c++;
            }
            else
            {
                break;
            }
        }
        return c;
        
    }
};