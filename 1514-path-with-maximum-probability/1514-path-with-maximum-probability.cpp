class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) 
    {
        //creating the adjacency list
        vector<vector<pair<int,double>>>adjl(n);
        for(int i=0;i<edges.size();i++)
         {
            int start=edges[i][0];
            int end=edges[i][1];
            double prob=succProb[i];
            adjl[start].push_back({end,prob});
            adjl[end].push_back({start,prob});
        }
        //Priority queue Max_heap {Probability,End Node}
        priority_queue<pair<double,int>>q;
        q.push({1,start_node});
        //Visited Array
        vector<double>visited(n,0);
        visited[start_node]=1;
        while(!q.empty())
        {
            double prob=q.top().first;
            int node=q.top().second;
            q.pop();
            for(auto it:adjl[node])
            {
                double next_prob=it.second;
                int next_node=it.first;
                double total_prob=(double)prob*next_prob;
                if(visited[next_node]<total_prob)
                {
                    visited[next_node]=total_prob;
                    q.push({total_prob,next_node});
                }

            }

        }
        return visited[end_node];
        
    }
};