class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        int x;
            while(n)
                
            {
                x=n%10;
                p*=x;
                s+=x;
                n/=10;
                
                
            }
        return p-s;
        
    }
};