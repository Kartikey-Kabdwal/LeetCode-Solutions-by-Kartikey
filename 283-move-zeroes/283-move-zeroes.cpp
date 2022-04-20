class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        int i=0;
        int j=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                c++;
            }
            else
            {
                v[j]=v[i];
                j++;
            }
        }
        j=n-1;
        while(c--)
        {
            v[j]=0;
            j--;
        }

        
    }
};