// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>m;
    int i=0,j=0;
    int len=-1;
    int n=s.size();
    while(j<n)
    {
        m[s[j]]++;
        while(m.size()>k)
        {
            m[s[i]]--;
            if(m[s[i]]==0)
            {
                m.erase(s[i]);
            }
            i++;
        }
        if(m.size()==k)
        {
        len=max(len,j-i+1);
        }
        j++;
    }
        return len;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends