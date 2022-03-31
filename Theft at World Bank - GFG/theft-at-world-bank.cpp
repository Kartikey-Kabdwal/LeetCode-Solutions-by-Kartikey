// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	static	bool is_perfect_square(long long x){
	    if (x >= 0) {
            long long sr = sqrt(x);
            return (sr * sr == x);
        }
        // else return false if n<0
        return false;
	}
	
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	   long double ans = 0.0000;
	   vector < pair<long, long>> vec;
	   for(int i=0; i<N; i++)
	       vec.push_back(make_pair(w[i], p[i]));
	   sort(vec.begin(), vec.end(), [](const pair<long, long> a, const pair<long, long> b){
	       return ((double)a.first/a.second) < ((long double)b.first/b.second);
	   });
	   for(auto i:vec){
	       //cout<<i.first<<" "<<i.second<<"\n";
	       if(is_perfect_square(i.first))
	           continue;
	       if( C >= i.first){
	           C -= i.first;
	           ans += (long double)i.second;
	       }
	       else {
	           ans += (long double)C*((long double)i.second/i.first);
	           break;
	       }
	   }
	   return ans;
	
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends