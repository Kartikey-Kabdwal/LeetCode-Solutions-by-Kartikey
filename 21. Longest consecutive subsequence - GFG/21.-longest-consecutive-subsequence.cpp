// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
       unordered_set<int> s;
       for(int i = 0; i < N; i++) s.insert(arr[i]);
       int ans = 0;
       for(int i = 0; i < N; i++){
           if(s.count(arr[i]-1)) continue;
           int count = 1, temp = arr[i];
           while(s.count(temp+1)) count++, temp++;
           ans = max(ans, count);
       }
       return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends