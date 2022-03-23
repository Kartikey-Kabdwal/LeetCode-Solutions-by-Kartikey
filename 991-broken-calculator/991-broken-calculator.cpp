class Solution {
public:
    int brokenCalc(int x, int k) {
       int c=0;
        while(k>x)
        {
            c++;
            if(k%2==0)
            {
                k/=2;
            }
            else
            {
                k++;
            }
        }
        return c+(x-k);
            
            
        
    }
};