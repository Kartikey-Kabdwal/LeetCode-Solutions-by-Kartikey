class Solution {
public:
    int numRescueBoats(vector<int>& v, int k) {
        
        sort(v.begin(),v.end());
        int n=v.size();
        int i=0,j=n-1;
        int c=0;
        while(i<=j)
        {
            if(v[i]+v[j]<=k)
            {
                i++;
                j--;
                
            }
            else
            {
                j--;
            }
            c++;
            
        }
        return c;
        
    }
};