class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int n=v.size();
        int x=*max_element(v.begin(),v.end());
        int pos=-1;

        for(int i=0;i<v.size();i++)
        {
            if(x==v[i])
            {
                pos=i;
                break;
            }
        }
        sort(v.begin(),v.end());
        if(v[n-1]>=v[n-2]*2)
        {
            return pos;
        }
        return -1;
        
        
        
    }
};