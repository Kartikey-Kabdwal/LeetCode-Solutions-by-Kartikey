class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int c=1;
        int l=0;
        
        int n=a.size();
        if(n<2)
        {
            return n;
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[l])
            {
                c++;
                a[l+1]=a[i];
                l++;
                
            }
            
        }
        return c;
        
    }
};