class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0;
        int ans=INT_MIN;
        int i=0,j=0;
        int n=v.size();
        while(j<n)
        {
           sum=max(sum+v[j],v[j]);
            ans=max(ans,sum);
            j++;
        }
        return ans;
        
    }
};