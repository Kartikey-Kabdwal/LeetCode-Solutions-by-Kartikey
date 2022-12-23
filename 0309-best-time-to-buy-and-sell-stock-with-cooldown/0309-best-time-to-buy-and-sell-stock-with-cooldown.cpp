class Solution {
public:


      int solve(vector<int>& prices, int i, int n, int buy){

          if(i >= n)
          return 0;

          if(buy == 1){

              return max(prices[i] + solve(prices,i+2,n,0) , solve(prices,i+1,n,1));

          }

              return max( -prices[i] + solve(prices,i+1,n,1) , solve(prices,i+1,n,0));

      }

      int solvedp(vector<int>& prices, int n){

          vector<vector<int>> dp(n,vector<int>(2,0));

          for(int i = n-1;i>=0;i--){
              for(int j=0;j<2;j++){

                  if(j == 0){
                      if(i == n-1){
                          dp[i][j] = 0;
                      }
                      else{
                          dp[i][j] = max(-prices[i]+dp[i+1][1],dp[i+1][0]);
                      }
                  }
                  else{
                      if(i == n-1)
                      dp[i][j] = prices[i];
                      else if(i == n-2)
                      dp[i][j] = max(prices[i],dp[i+1][1]);
                      else{
                          dp[i][j] = max(prices[i]+dp[i+2][0],dp[i+1][1]);
                      }
                  }

              }
          }
        return dp[0][0];
      }

    int maxProfit(vector<int>& prices) {
        //return solve(prices,0,prices.size(),0);
        return solvedp(prices,prices.size());
    }
};
