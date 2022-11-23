//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	void primefactor(int n,unordered_set<int>&s)
	{
	    int c=0;
	    while(n%2==0)
	    {
	       
	        n/=2;
	        s.insert(2);
	        
	    }
	    for(int i=3;i<=sqrt(n);i+=2)
	    {
	        while(n%i==0)
	        {
	            
	            n/=i;
	            s.insert(i);
	        }
	    }
	    if(n>2)
	    {
	       
	        s.insert(n);
	   }
	        
	        
	    
	   
	    
	}
	int isSphenicNo(int n){
	    unordered_set<int>s;
	    primefactor(n,s);
	    if(s.size()!=3)
	    {
	        return 0;
	    }
	    int ans=1;
	    for(auto it:s)
	    {
	       
	        ans*=it;
	    }
	    return ans==n;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.isSphenicNo(N);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends