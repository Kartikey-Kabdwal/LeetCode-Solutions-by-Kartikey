class Solution {
public:
    int maximumUniqueSubarray(vector<int>& v) {
        
        int sum=0;
        int i=0,j=0;
        int n=v.size();
        int ans=0;
        unordered_map<int,int>m;
        while(j<n)
        {
            m[v[j]]++;
            sum+=v[j];
            while(m[v[j]]>1)
            {
                sum-=v[i];
                m[v[i]]--;
                i++;     
            }
            ans=max(ans,sum);
            j++;
        }
        return ans;
        
        
    }
};