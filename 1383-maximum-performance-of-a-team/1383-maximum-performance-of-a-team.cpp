class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int mod=1e9+7;
        vector<pair<int,int>> store;
        for(int i=0;i<n;i++){
            store.push_back({efficiency[i],speed[i]});
        }
        sort(store.rbegin(),store.rend());
        priority_queue<int,vector<int>,greater<int>> pq;
        long ans=0,sum=0;
        for(auto i:store){
            pq.emplace(i.second);
            sum+=i.second;
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*i.first);
        }
        return ans%mod;
    }
};
