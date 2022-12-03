class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>m;
        int i=0,j=0;
        int n=s.size()-10;
        vector<string>ans;
        while(j<=n)
        {
            m[s.substr(j,10)]++;
            j++;    
        }
        for(auto it:m)
        {
            if(it.second>1)
            {
                 ans.push_back(it.first);
                
            }
           
        }
        return ans;
        
    }
};