class Solution {
public:
    int maxAbsoluteSum(vector<int>& v) {
        
        int n=v.size();
        int i=0,j=0;
        int s1=0,s2=0;
        vector<int>mx,mn;
        for(int i=0;i<n;i++)
        {
            s1=max(s1+v[i],v[i]);
            mx.push_back(s1);
            
            s2=min(s2+v[i],v[i]);
            mn.push_back(s2);
            
        }
int x = max(abs(*min_element(mn.begin(), mn.end())), abs(*max_element(mx.begin(), mx.end())));            return x;
    }
};