class Solution {
public:
    int numRescueBoats(vector<int>& v, int k) {
        int n=v.size();
        int l=0,r=n-1;
        int c=0;
        sort(v.begin(),v.end());
        
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

    