//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
        
    bool calc(vector<int> &v, int m,int i, int sum)
{
     if (i >= v.size())
     {
         if(sum==0)
         {
             return false;
         }
          if(sum%m==0)
          {
              return true;
          }
          return false;
     }
     return calc(v, m,i + 1, sum) or calc(v, m,i + 1, sum + v[i]);
}
		int DivisibleByM(vector<int>v, int m){
		    
		    return calc(v,m,0,0);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends