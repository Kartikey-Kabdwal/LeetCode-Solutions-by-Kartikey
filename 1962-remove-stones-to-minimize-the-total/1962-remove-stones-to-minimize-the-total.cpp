class Solution {
public:
    int minStoneSum(vector<int>& v, int k) {
        priority_queue<int>pq(v.begin(),v.end());
        int ans=0;
        while(k--)
        {
            ans=pq.top()/2;
            pq.push(pq.top()-ans);
            pq.pop();
            
        }
        ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        
        return ans;
        
    }
};