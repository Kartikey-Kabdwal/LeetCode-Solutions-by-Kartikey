class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1,m2;
        for(int i=0;i<s1.size();i++)
        {
            m1[s1[i]]++;
        }
        int n=s2.size();
        int k=s1.size();
       int j=0,i=0;
        while(j<n)
        {
            m2[s2[j]]++;
            if(j-i+1==k)
            {
                if(m1==m2)
                {
                    return true;
                }
               
                    m2[s2[i]]--;
                    if(m2[s2[i]]==0)
                    {
                        m2.erase(s2[i]);
                    }
                    i++;
                
             }
            j++;
        }
        return false;
        
        
    }
};