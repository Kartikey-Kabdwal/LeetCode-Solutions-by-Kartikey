class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>>pq;
        
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        pair<int,int>check;
        check.first = -1;
        check.second = '-';
        while(!pq.empty())
        {
            pair<int,char>temp=pq.top();
            pq.pop();
            ans+=temp.second;
            
              if(check.first>0)
            {
                
                pq.push(make_pair(check.first,check.second));
            }
            temp.first = temp.first-1;
            check.first = temp.first;
            check.second = temp.second;
            
            
            
            
        }
        
        if(s.size()==ans.size())
        {
            return ans;
        }
        else
        {
            return "";
        }
        
    }
};