class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        
        int n=v.size();
        unordered_map<int,int>m;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++)
        {
            m[v[i]]++;
        }
        for(auto it :m)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
        
    }
};