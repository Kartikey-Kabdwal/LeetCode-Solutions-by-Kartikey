//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string s){
        
        int i=0,j=0;
        int ans=0,a=0;
        while(j<n)
        {
           
            if(s[j]=='A')
            {
                a++;
            }
            else
            {
                 while(m==0)
            {
                if(s[i]=='O')
                {
                    m++;
                }
                a--;
                i++;
            }
                m--;
                a++;
            }
            ans=max(ans,a);
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends