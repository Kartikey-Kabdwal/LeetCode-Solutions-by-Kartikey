class Solution {
public:
    bool check(vector<int>arr,int n,int sum,vector<vector<int>>&dp)
{
     if (sum == 0)
     {
          return true;
     }
     if (n == 0)
     {
          return arr[n] == sum;
     }
        if(dp[n][sum]!=-1)
        {
            return dp[n][sum];
        }
     if (arr[n] > sum)
     {
          return dp[n][sum]= check(arr, n - 1, sum,dp);
     }
     return dp[n][sum]=check(arr, n - 1, sum - arr[n],dp) or check(arr, n - 1, sum,dp);
}

    bool canPartition(vector<int>& arr) {
        int n=arr.size();
         int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%2==1)
        {
            return false;
        }
        sum/=2;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        
        return check(arr,n-1,sum,dp);
        
    }
};