class Solution {
public:
    int brokenCalc(int x, int k) {
        if(x>=k)
        {
            return x-k;
        }
        if(k%2==0)
        {
            return 1+brokenCalc(x,k/2);
        }
        return 1+brokenCalc(x,k+1);
            
            
        
    }
};