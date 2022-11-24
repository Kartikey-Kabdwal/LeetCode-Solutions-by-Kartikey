//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
vector<bool>v(10009,true);
class Solution {
  public:
    
    void percompute()
    {
        v[0]=v[1]=false;
        for(int i=2;i*i<=10009;i++)
        {
            if(v[i])
            {
            for(int p=i*i;p<=10009;p+=i)
            {
                v[p]=false;
            }
            }
        }
    }
    int minThirdPiles(int A, int B)  {
        int x=A+B;
        
        percompute();
        int tmp=x;
        tmp++;
        while(!v[tmp])
        {
            tmp++;
            
        }
        return tmp-x;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout<<ob.minThirdPiles(A, B)<<endl;
    }
    return 0;
}

// } Driver Code Ends