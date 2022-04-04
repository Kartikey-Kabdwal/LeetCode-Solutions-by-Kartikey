// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
       vector<int>v(26,0);
       priority_queue<int>pq;
       for(int i=0;i<s.size();i++)
       {
           v[s[i]-97]++;
           
       }
       for(int i=0;i<26;i++)
       {
           pq.push(v[i]);
       }
       while(k--)
       {
           int x=pq.top();
           x-=1;
           pq.pop();
           pq.push(x);
       }
       int ans=0;
      
       while(!pq.empty())
       {
            ans+=pq.top()*pq.top();
           pq.pop();
       }
       
       return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends