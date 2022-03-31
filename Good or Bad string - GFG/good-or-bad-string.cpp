// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string s) {
        unordered_set<char>m={'a','e','i','o','u'};
        int c=0,v=0;
        for(int i=0;i<s.size();i++)
        {
            if(m.count(s[i]))
            {
                v++;
                c=0;
                if(v>5)
                {
                    return 0;
                }
            }
            else if(s[i]=='?')
            {
                c++;
                v++;
                if(c>3 or v>5)
                {
                    return 0;
                }
            }
            else
            {
                c++;
                v=0;
                if(c>3)
                {
                    return 0;
                }
            }
        }
        return 1;
        // code here
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends