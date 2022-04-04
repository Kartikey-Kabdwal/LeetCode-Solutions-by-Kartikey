// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

 bool func(pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second<b.second;
        }
class Solution
{
    
    public:
    
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({s[i],e[i]});
        }
        sort(v.begin(),v.end(),func);
        int c=1;
        int i=0,j=1;
        while(j<n)
        {
            if(v[j].first>v[i].second)
            {
                c++;
                i=j;
                j++;
            }
            else
            {
                j++;
            }
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends