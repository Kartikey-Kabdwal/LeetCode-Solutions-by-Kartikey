class Solution {
public:
    void dfs(int k, vector<bool>& cities, vector<vector<int>>& isConnected) {
        if (cities[k] == false) {
            cities[k] = true;
            for (int i = 0; i < cities.size(); i++) {
                if (isConnected[k][i] == 1) 
                    dfs(i, cities, isConnected);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        vector<bool> cities(n, false);
        int res = 0;
        
         for (int i = 0; i < n; i++) {
             if (cities[i] == false) res++;
             dfs(i, cities, isConnected);
         }
        return res;        
    }
};
