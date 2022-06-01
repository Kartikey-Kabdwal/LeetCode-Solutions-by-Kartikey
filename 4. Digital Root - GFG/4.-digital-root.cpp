// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int sum(int n)
    {
        if(n==0)
        {
            return 0;
        }
        return n%10+sum(n/10);
    }
    int digitalRoot(int n)
    {
        int ans=sum(n);
        if(n/10==0)
        {
            return ans;
        }
        else
        {
            digitalRoot(ans);
        }
        
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends