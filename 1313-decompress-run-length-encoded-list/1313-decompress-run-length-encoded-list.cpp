class Solution {
public:
    vector<int> decompressRLElist(vector<int>& v) {
       
        vector<int>a;
        int n=v.size();
        
        for(int i=0;i<n;i+=2)
        {
            
            for(int j=1;j<=v[i];j++)
            {
                a.push_back(v[i+1]);
            }
            
        }
        return a;
        
    }
};