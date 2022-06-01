// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
     int c=0;
    void printNos(int n)
    {
       
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<" "; 
        }
       

    }
};

// { Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends