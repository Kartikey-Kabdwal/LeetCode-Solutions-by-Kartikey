class Solution {
public:
    int minSubArrayLen(int k, vector<int>& v) {
        
        int i=0,j=0;
        int n=v.size();
        
        int ans=INT_MAX;
        while(j<n)
        {
            k-=v[j];
            while(k<=0)
            {
                k+=v[i];
                ans=min(ans,j-i+1);
                i++;
            }
            j++;
        }
        return ans==INT_MAX?0:ans;
        
    }
};