class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        
        int i=0,j=1;
        int n=v.size();
        while(j<n)
        {
            if(v[i]!=v[j])
            {
               v[i+1]=v[j];
                i++;
                
            }
            
            j++;
        }
        return i+1;
        
    }
};