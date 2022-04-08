// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            
            unordered_set<char>c1,c2;
            
            for(int i=0;i<a.size();i++)
            {
                c1.insert(a[i]);
            }
            for(int i=0;i<b.size();i++)
            {
                c2.insert(b[i]);
            }
            string ans="";
            for(char it:c1)
            {
                if(c2.count(it))
                {
                    c2.erase(it);
                }
                else
                {
                    c2.insert(it);
                }
            }
             for(char it:c2)
            {
                ans+=it;
            }
            sort(ans.begin(),ans.end());
            return ans==""?"-1":ans;
            
            
            
            
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends