class Solution {
public:
    static int isvovel(char x)
    {
        tolower(x);
        return (x=='a' or x=='e' or x=='i' or x=='o' or x=='u' );
    }
    int maxVowels(string s, int k) {
        
        int v=0;
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        while(j<n)
        {
            v+=isvovel(s[j]);
            if(j-i+1==k)
            {
                ans=max(v,ans);
                if(isvovel(s[i]))
                {
                    v--;
                }  
                i++;
                
            }
            j++;
                
        }
        return ans;
        
        
    }
};