class Solution {
public:
    void greaterB(vector<int>&b,unordered_map<int,int>&m2)
    {
        stack<int>s;
        for(int i=0;i<b.size();i++)
        {
           while(!s.empty() and b[i]>b[s.top()])
           {
                m2[b[s.top()]]=b[i];
               s.pop();
              
           }
            s.push(i);
        }
        while(!s.empty())
        {
            m2[b[s.top()]]=-1;
            s.pop();
        }
    }
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>m2;
        greaterB(b,m2);
      
        vector<int>ans;
       for(int i=0;i<a.size();i++)
       {
           ans.push_back(m2[a[i]]);
       }
        
       
        return ans;
        
        
        
    }
};