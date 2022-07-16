class Solution {
public:
    bool canPartition(vector<int>& nums) {
         int sum=0;
        for(int num:nums){
            sum+=num;
        }
        if(sum%2!=0) return false;
        int target= sum/2;
        return subsetSum(nums,target);
    }
    bool subsetSum(vector<int>& nums,int target)
    {
        
     int n=nums.size();
    bool t[n+1][target+1];
        
        for(int i=0;i<n+1;i++)
        for(int j = 0 ;j<target+1;j++){
            if(i==0){
                t[i][j]=false;
            }
            if(j==0){
                t[i][j]=true;
            }
        }
        
        for(int i=1;i<n+1;i++){
           for(int j=1;j<target+1;j++){
               if(nums[i-1]<=j){
                   t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
               }else
               {
                   t[i][j] = t[i-1][j];
               }
           }   
        }
        return t[n][target];
}
    //!! Memoization 
//      bool check(vector<int>&v,int i,int x,vector<vector<int>>&dp)
//     {
//         if(x<=0)
//         {
//               return x==0;
//         }
//         if(i==0)
//         { return (v[i]==x);}
//         if(dp[i][x]!=-1)
//         {
//             return dp[i][x];
//         }
         
//         else
//         {
//             return dp[i][x]= check(v,i-1,x,dp) or check(v,i-1,x-v[i],dp);
//         }
//     }
//     bool canPartition(vector<int>& v) {
//         int n=v.size();
        
//         int x=accumulate(v.begin(),v.end(),0);
        
//         if(x%2==1) 
//         {return 0;}
//         else
//         {
//             x=x/2;
//             vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
             
//           return check(v,n-1,x,dp) ;
//         }
        
//     }
    
};