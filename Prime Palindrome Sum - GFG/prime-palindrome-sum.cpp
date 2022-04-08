// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool ispal(int x)
  {
      int t=x;
      int ans=0;
      while(x)
      {
          ans=(10*ans)+(x%10);
          x/=10;
          
      }
      return t==ans;
  }
  bool isprime(int n)
  {
       if(n==1){
           return false;
       }
      for(int i=2;i<=sqrt(n);i++)
      {
          if(n%i==0)
          {
              return false;
          }
      }
      return true;
  }
    long long getPPS(int a, int b) {
        int s=0;
        for(int i=a;i<=b;i++)
        {
            if(isprime(i) and ispal(i))
            {
                s+=i;
            }
        }
        return s;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getPPS(a,b) << endl;
    }
    return 0;
}  // } Driver Code Ends