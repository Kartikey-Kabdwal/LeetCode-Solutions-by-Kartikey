// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int calc(int start,int end,int ans)
    {
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
                
            if(isBadVersion(mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
                
            }
            
        }
        return ans;
    }
    int firstBadVersion(int n) {
        
        
        
        return calc(1,n,-1);
        // return ans;
        
    }
};