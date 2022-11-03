//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:

    int sum(int k)
    {
        int c=0;
        while(k)
        {
            c+=k%10;
            k/=10;
            
        }
        return c;
    }
    string smallestNumber(int s, int d){
        // code here
        int start=pow(10,d-1);
        int end=pow(10,d)-1;
        for(int i=start;i<=end;i++)
        {
            if(sum(i)==s)
            {
                return to_string(i);
            }
        }
        return "-1";
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends