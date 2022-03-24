class Solution {
public:
    int numRescueBoats(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int l=0,r=v.size()-1;
        int c=0;
        while(l<=r)
        {
            
            if(v[l]+v[r]<=k)
            {
                l++;
                r--;
            }
            else
            {
                r--;
            }
            c++;
        }
        return c;
        
    }
};