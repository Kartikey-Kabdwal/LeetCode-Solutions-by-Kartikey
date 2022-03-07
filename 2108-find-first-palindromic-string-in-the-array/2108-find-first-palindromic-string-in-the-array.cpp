class Solution {
public:
    bool ispal(string s)
    {
        int n=s.size();
        for(int i=0;i<n/2+1;i++)
        {
            if(s[i]!=s[n-i-1])
                 {
                     return false;
                 }
        }
                 return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++)
        {
            if(ispal(words[i]))
            {
                return words[i];
            }
        }
        return "";
        
    }
};