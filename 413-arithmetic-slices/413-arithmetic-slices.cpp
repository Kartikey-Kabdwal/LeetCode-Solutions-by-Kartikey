class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        
          int ans=0;
    int cnt=0;
    for(int i=1;i<a.size()-1;i++)
    {
        if(a[i-1]-a[i]==a[i]-a[i+1])
            ans++;
        else
            ans=0;
        cnt+=ans;
    }
    
   
    
    
    return cnt;
        
    }
};