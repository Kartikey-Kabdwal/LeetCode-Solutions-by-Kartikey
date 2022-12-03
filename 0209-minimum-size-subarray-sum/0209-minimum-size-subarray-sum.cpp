class Solution {
public:
    int minSubArrayLen(int k, vector<int>& v) {
        
        int i=0,j=0,n=v.size();
        int ans=INT_MAX,sum=0;
        while(j<n)
        {
            sum+=v[j];
            while(sum>=k)
            {
                ans=min(ans,j-i+1);
                sum-=v[i];
                i++;
            }
            
           
            j++;
            
        }
        return ans==INT_MAX ? 0:ans;
        
    }
};