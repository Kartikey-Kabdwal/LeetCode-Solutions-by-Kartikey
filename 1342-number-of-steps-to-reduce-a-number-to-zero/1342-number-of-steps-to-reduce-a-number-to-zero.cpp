class Solution {
public:
    int numberOfSteps(int x) {
        int c=0;
        while(x!=0)
        {
            if(x&1)
            {
                x-=1;
            }
            else
            {
                x/=2;
            }
            c++;
            
        }
        
        return c;
        
    }
};