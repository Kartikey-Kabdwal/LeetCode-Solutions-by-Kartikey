class Solution {
public:
    int longestSubarray(vector<int>& a) {
        
        int i=0,j=0,c=0,m=0;
        int n=a.size();
        while(j<n)
        {
            if(a[j]==0 )
            {
                c++;
            }
            if(c<=1)
            {
                m=max(m,j-i);
                j++;
            }
            else if (c>1)
            {
                while(c>1)
                {
                    if (a[i]==0)
                    {
                        c--;
                    }
                    i++;
                }
                j++;
            }
        }
        return m;
        
    }
};