class Solution {
public:
    int minSubArrayLen(int k, vector<int>& v) {
        
        int i=0,n=v.size(),j=0;
        int sum=0;
        int len=INT_MAX;
        while(j<n)
        {
            sum+=v[j];
            if(sum>=k)
            {
               
                while(sum>=k)
                {
                     len=min(len,j-i+1);
                    sum-=v[i];
                    i++;
                    
                }
            }
            j++;
        }
        return len==INT_MAX?0:len;
        
    }
};