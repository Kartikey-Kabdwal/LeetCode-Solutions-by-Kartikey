class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        
        unordered_set<int>s;
        if(v.size()==0)
        {
            return 0;
        }
        for(auto it:v)
        {
            s.insert(it);
        }
        int c=0,ans=0;
        for(auto it:s)
        {
            if(!s.count(it-1))
            {
                c=0;
               int i=it+1;
                int x=s.size();
                while(x--)
                {
                    if(s.count(i++))
                    {
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            ans=max(ans,c);
        }
        return ans==0?1:ans+1;
        
    }
};