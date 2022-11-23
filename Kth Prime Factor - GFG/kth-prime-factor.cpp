//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kthPrime(int n, int k){
        if(n==0)
        {
            return -1;
        }
            while (n % 2 == 0)
     {
         
          n = n / 2;
          k--;
          if(k==0)          {              return 2;          }
     }

     // n must be odd at this point. So we can skip
     // one element (Note i = i +2)
     for (int i = 3; i <= sqrt(n); i = i + 2)
     {
          // While i divides n, print i and divide n
          while (n % i == 0)
          {
               
               n = n / i;
                k--;
          if(k==0)          {              return i;          }
          }
     }

     // This condition is to handle the case when n
     // is a prime number greater than 2
     if (n > 2 and k==1)
     {  return n;
    
        
     }
     return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends