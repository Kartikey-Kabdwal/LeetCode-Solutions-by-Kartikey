class Solution {
public:
    int largestPerimeter(vector<int>& v) {
        sort(v.begin(),v.end());
        
        int m=0,f=0;
        for(int i=0;i<v.size()-2;i++)
        {
            if(v[i]+v[i+1]>v[i+2])
            {
                m=max(v[i]+v[i+1]+v[i+2],m);
                f=1;
            }
        }
        if(f==1){return m;}
        return 0;
        
    }
};