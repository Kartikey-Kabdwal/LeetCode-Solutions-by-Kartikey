class Solution {
public:
    int calc(vector<int> v,int k)
    {
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            c+=abs(k-v[i]);
        }
        return c;
    }
    int minMoves2(vector<int>& v) {
        sort(v.begin(),v.end());
        
        int n=v.size();
        if(n%2==1)
        {
            return calc(v,v[n/2]);
            
        }
        else
        {
            return min(calc(v,v[n/2]),calc(v,v[(n/2)-1]));
        }
        
    }
};