// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int s)
    {
         if(9*n<s )
        {
            return "-1";
        }
        string ans="";
        while(ans.size()!=n)
        {
            if(s>=9)
            {
                s-=9;
                ans+="9";
            }
            else
            {
                
                ans+=to_string(s);
                s=0;
            }
        }
        // code here
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends