class Solution {
public:
    int arrangeCoins(int n) {
        int c=1;
        while(n>0)
        {
            c++;
            n-=c;
        }
        return c-1;
    }
};