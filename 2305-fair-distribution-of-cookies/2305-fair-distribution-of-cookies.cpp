
class Solution {
    int ans;

    void solve(int i,vector<int>&cookies,vector<int>&subset,int k){
          
      int n=cookies.size() ;

       if(i==n){
       int ma=0;
        for(int x:subset) {
             ma=max(ma,x);
        }
         
         ans=min(ans,ma) ;

        return ;   
      }

       for(int j=0;j<k;j++){
           subset[j]+=cookies[i];
           solve(i+1,cookies,subset,k) ;
           subset[j]-=cookies[i] ;
       } 

     }

public:
    int distributeCookies(vector<int>& cookies, int k) {

      
       ans=INT_MAX;
       vector<int>subset(k,0) ;

       solve(0,cookies,subset,k) ;
 
       return ans;
        


    }
};