class Solution {
public:
    int count(string s)
    {
        int isLowercaseVowel=0;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            isLowercaseVowel += (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        }
        return isLowercaseVowel;
    }
    bool halvesAreAlike(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return count(s.substr(0,s.size()/2))==count(s.substr(s.size()/2,s.size()/2));
        
        
        
    }
};