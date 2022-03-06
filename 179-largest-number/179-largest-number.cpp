class Solution {
public:
    static bool comp(int a, int b)
{
     string x, y;
      x = to_string(a) + to_string(b);
      y = to_string(b) + to_string(a);
        
     return x > y;
}
    string largestNumber(vector<int>& v) {
       
        
        
        sort(v.begin(),v.end(),comp);
        if(v[0]==0) 
        {
                return "0";
        }
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            ans+=to_string(v[i]);
        }
        return ans;
    }
};