class Solution {
public:
    bool validPalindrome(string s) {
        
        int c1=0,c2=0;
        int n=s.size();
        int start=0,end=n-1;
        while(start<=end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                c1++;
                start++;
            }
        }
        start=0,end=n-1;
        while(start<=end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                c2++;
                end--;
            }
        }
        
        
        return min(c1,c2)<=1;
    }
};