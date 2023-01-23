class Solution {
public:
    int minMoves2(vector<int>& v) {
        
        
        int n=v.size();
        sort(v.begin(),v.end());
        int sum=0;
        if(n%2)
        {
            for(int i=0;i<v.size();i++)
            {
            sum+=abs(v[n/2]-v[i]);
            }
            return sum;
        }
        else
        {
            int a=0,b=0;
            for(int i=0;i<v.size();i++)
            {
            b+=abs(v[(n/2)-1]-v[i]);
            } 
            for(int i=0;i<v.size();i++)
            {
            a+=abs(v[n/2]-v[i]);
            } 
            return min(a,b);
        }
        
    }
};