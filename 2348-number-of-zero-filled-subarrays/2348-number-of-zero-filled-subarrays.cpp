class Solution {
public:
    long long zeroFilledSubarray(vector<int>& v) {
        long long ans=0;
        long long c=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                c++;
                continue;
            }
            ans+=c*(c+1)/2;
            c=0;
            
        }
        ans+=c*(c+1)/2;

        return ans;
        
    }
};