class Solution {
public:
    int largestSumAfterKNegations(vector<int>& v, int k) {
        
       priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<v.size();i++)
        {
            pq.push(v[i]);
        }
        int x;
        
        for(int i=0;i<k;i++)
        {   x=pq.top();
           
             pq.pop();
             pq.push(-1*x);
         
        }
        x=0;
        while(!pq.empty())
        {
            x+=pq.top();
            pq.pop();
        }
        return x;
        
        
    }
};