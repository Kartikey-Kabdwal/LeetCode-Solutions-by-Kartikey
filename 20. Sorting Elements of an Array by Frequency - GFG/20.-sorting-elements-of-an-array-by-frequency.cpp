// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int v[],int n)
    {
       unordered_map<int,int>m;
       vector<int>ans;
       priority_queue<pair<int,int>>pq;
       
       for(int i=0;i<n;i++)
       {
           m[v[i]]++;
       }
       
       for(auto it:m)
       {
           pq.push({it.second,-it.first});
           
       }
       
       while(!pq.empty())
       {
           int x=pq.top().first;
           int y=pq.top().second;
           while(x--)
           {
               ans.push_back(-y);
                
           }
           pq.pop();
       }
       return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends