class Solution {
public:
    int calc(vector<int>&v,int k)
    {
        int n=v.size();
        int i=0,j=0;
        int sum=0;
        int ans=0;
        while(j<n)
        {
            sum+=v[j];
            while(sum>k and i<=j )
            {
                sum-=v[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& v, int k) {
        
        return calc(v,k)-calc(v,k-1);
        
    }
};