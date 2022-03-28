// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{static bool func(pair<int,int>a,pair<int,int>b)
    {
        
         return a.second<b.second;
    }
    public:
    
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>>v;
       for(int i=0;i<n;i++)
       {
           v.push_back({start[i],end[i]});
       }
       sort(v.begin(),v.end(),func);
       int c=1,i=1,j=0;
       while(i<n)
       {
           if(v[i].first>v[j].second)
           {
               
               j=i;
               c++;
           }
          i++;
       }
       return c;
       
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends