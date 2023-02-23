class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
         
        vector<pair<int,int>> adj[n+1];
        for(auto x:times){
            adj[x[0]].push_back({x[1],x[2]});
        }
        vector<int> dis(n+1,INT_MAX);
        priority_queue<pair<int,int> ,vector<pair<int,int>> , greater<>> q;
        q.push({k,0});
        dis[k] = 0;
        while(q.size()){
            int node = q.top().first;
            int distance = q.top().second;
            q.pop();
             for(auto it:adj[node]){
                 int adjnode = it.first;
                 int adjw = it.second;
                 if(distance+adjw<dis[adjnode]){
                     dis[adjnode] = distance + adjw;
                     q.push({adjnode,distance+adjw});
                 }
             }

        }

        int z = *max_element(dis.begin()+1,dis.end());
        if(z==INT_MAX)
        return -1;
        return z;
        

 
    }
};
