class Solution {
public:
    int findUnsortedSubarray(vector<int>& v) {
        
        vector<int>x=v;
        sort(v.begin(),v.end());
        int j=v.size()-1;
        int i=0;
       int n=v.size();
        while(i<n)
        {
            if(v[i]==x[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i==n)
        {
            return 0;
        }
        while(j>=0)
        {
            if(v[j]==x[j])
            {
                j--;
            }
            else
            {
                break;
            }
        }
        return j-i+1;
        
    }
};