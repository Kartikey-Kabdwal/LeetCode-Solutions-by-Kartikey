class Solution {
public:
    
    static bool binaryS(int low,int high,int k)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            // cout<<low<<" "<<mid<<" "<<high<<" "<<k<<endl;
            
            int x=mid*mid;
            if(x==k)
            {
                return true;
            }
            else if(x<k)
            {
                 low=mid+1;
               
            }
            else
            {
                 high=mid-1;
               
            }
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        
       
        for(int i=0;i<=sqrt(c);i++)
        {
            int target=c-(i*i);
            if(binaryS(i,sqrt(c),target))
            {
                return true;
            }
        }
        return false;
        
    }
};