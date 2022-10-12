class Solution {
public:
    int largestPerimeter(vector<int>& v) {
       sort(v.begin(),v.end(),greater<int>());
        int n=v.size();
        
        for(int i=0;i<n-2;i++)
        {
            if(v[i+1]+v[i+2]>v[i])
            {
                return v[i]+v[i+1]+v[i+2];
            } 
        }
        return 0;
    }
};