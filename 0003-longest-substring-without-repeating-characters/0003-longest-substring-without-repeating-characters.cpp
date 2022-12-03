class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>m;
        
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        while(j<n)
        {m[s[j]]++;
            while(m.size()!=j-i+1)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                {
                m.erase(s[i]);
                }
                i++;
            }
            
            ans=max(j-i+1,ans);
            j++;
        }
        return ans;
    }
};