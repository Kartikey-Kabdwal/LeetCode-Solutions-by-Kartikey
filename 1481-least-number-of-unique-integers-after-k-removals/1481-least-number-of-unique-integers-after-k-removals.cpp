class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& v, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:m)
        {
            pq.push(it.second);
        }
        while(k--)
        {
          int x=pq.top();
            pq.pop();
            x--;
            if(x==0)
            {
                continue;
            }
            
            pq.push(x);
            
            
            
        }
        return pq.size();
        
        
    }
};