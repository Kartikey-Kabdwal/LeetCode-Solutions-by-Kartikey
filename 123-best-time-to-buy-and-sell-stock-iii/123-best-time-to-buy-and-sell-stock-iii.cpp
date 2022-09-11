class Solution {
public:
    int dp[100005][2][2];
    int solve(int index, int buyed, int noOfTransaction, vector<int>&prices){
        if(index >= prices.size() || noOfTransaction == 2) return 0;
        
        if(dp[index][buyed][noOfTransaction] != -1) return dp[index][buyed][noOfTransaction];
        
        if(buyed){
             int res= max(prices[index]+solve(index+1,0,noOfTransaction+1,prices), solve(index+1,1,noOfTransaction,prices));
            return dp[index][buyed][noOfTransaction] = res;
        }
        else{
            int res=max(-prices[index]+solve(index+1,1,noOfTransaction,prices), solve(index+1,0,noOfTransaction,prices));
             return dp[index][buyed][noOfTransaction] = res;
        }
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, prices);
    }
};
