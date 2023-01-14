class Solution {
public:
    int minPairSum(vector<int>& v) {
        sort(v.begin(),v.end());
        int i=0, j=v.size()-1;
        int ans=0;
        while(i<j)
        {
            ans=max(ans,v[i]+v[j]);
            i++;
            j--;
        }
        return ans;
        
    }
};