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
void calc()
{
     v[0] = false;
     for (int i = 1; i <= sz; i++)
     {
          if (ishappy(i))
          {
               v[i] = true;
          }
          else
          {
               v[i] = false;
          }
     }
}
    int nextHappy(int n){
        calc();
        n++;
       
        while (!v[n])
     {
          n++;
     }
     return  n;
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