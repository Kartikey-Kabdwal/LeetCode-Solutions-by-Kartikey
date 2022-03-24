class Solution {
public:
    int arraySign(vector<int>& v) {
        long long int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
        {
            return 0;
        }
            if(v[i]<0)
            {
                c++;
            }
        }
        
        return c&1?-1:1;
        
    }
};