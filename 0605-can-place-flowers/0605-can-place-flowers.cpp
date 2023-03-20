class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
       
        int sz=v.size();
        if(sz==1 )
        {
            if(n==0)
            {
                return true;
            }
            if(v[0]==0 and n<=1)
            {
                return true;
            }
            return false;
            
        }
        if(v[0]==0 and v[1]==0)
        {
            v[0]=2;
            n--;
        }
        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i]==0 and v[i-1]==0 and v[i+1]==0)
            {
                v[i]=2;
                n--;
            }       
        }
       
        if(v[sz-1]==0 and v[sz-2]==0)
        {
            v[sz-1]=2;
            n--;
        }
        if(n>0)
        {
            return false;
        }
        return true;
        
    }
};