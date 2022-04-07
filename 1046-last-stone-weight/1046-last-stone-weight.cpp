class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int>pq;
        for(int i=0;i<v.size();i++)
        {
            pq.push(v[i]);
        }
        while(!pq.empty())
        {
            if(pq.size()==1)
            {
                return pq.top();
                pq.pop();
            }
                
            else if(pq.size()>2)
            {
                int x=pq.top();
                pq.pop();
                int y=pq.top();
                pq.pop();
                if(x!=y)
                {
                pq.push(abs(x-y));
                }
            }
            else if(pq.size()==2)
            {
                int x=pq.top();
                pq.pop();
                int y=pq.top();
                pq.pop();
                return abs(x-y);
            }
        }
        return 0;
        
    }
};