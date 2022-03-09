class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int k) {
        
        int n=v.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                int prev=(i==0 or v[i-1]==0)?0:1;
                int next=(i==n-1 or v[i+1]==0)?0:1;
                
                if(prev==0 and next==0)
                {
                    v[i]=1;
                    c++;
                }
            }
        }
        return k<=c;
        
    }
};