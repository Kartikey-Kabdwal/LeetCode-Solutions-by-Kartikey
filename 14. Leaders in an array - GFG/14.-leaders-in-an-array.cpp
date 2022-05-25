// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int v[], int n){
        // Code here
        
        vector<int>ans;
        stack<int>s;
        s.push(v[0]);
        for(int i=1;i<n;i++)
        {
            // if(s.empty())
            // {
            //     s.push(v[i]);
            // }
            // else
            // {
                if(v[i]<s.top())
                {
                    s.push(v[i]);
                }
                else
                {
                    while(!s.empty() and s.top()<v[i]  )
                    {
                        
                        s.pop();
                        
                    }
                    s.push(v[i]);
                }
            // }
        }
        
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends