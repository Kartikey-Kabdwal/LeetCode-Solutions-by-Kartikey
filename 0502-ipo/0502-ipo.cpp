class Solution {
public:
    // for same capital, we give more priority to the
    // project with higher profit
    static bool compare(pair<int,int>& a, pair<int,int>& b) {
        if(a.first == b.first) return a.second>b.second;
        return a.first<b.first;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> arr;

        for(int i=0; i<n; ++i) {
            arr.push_back(make_pair(capital[i],profits[i]));
        }
        sort(begin(arr), end(arr), compare);

        int idx = 0;
        priority_queue<int> pq;

        while(k>0 and idx<n) {
            while(idx<n && arr[idx].first <= w) {
                pq.push(arr[idx].second);
                ++idx;
            }
            while(!pq.empty() and pq.top() <= 0) {
                pq.pop();
            }
            if(pq.empty() and idx<n and arr[idx].first > w) 
                break;
            --k;
            w += pq.top();
            pq.pop();
        }
        
        while(k>0 and !pq.empty() and pq.top() > 0) {
            --k;
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};
