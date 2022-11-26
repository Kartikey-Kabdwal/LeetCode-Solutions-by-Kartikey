//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

#define sz 1007
vector<int> v(sz, false);
class Solution{
public:
int digitsqr(int n)
{
     int product = 0;
     while (n)
     {
          int x = n % 10;
          product += (x * x);
          n /= 10;
     }
     return product;
}
bool ishappy(int n)
{
     unordered_set<int> s;
     while (n != 1)
     {
          n = digitsqr(n);
          if (s.count(n))
          {
               return false;
          }
          s.insert(n);
     }
     return true;
}
    int nextHappy(int n){
        
        n++;
       
        while (true)
     {
         if(ishappy(n))
         {
             return n;
         }
          n++;
     }
     return  -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends