// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int v[], int n){
        // code here
        int i=0,j=n-1;
        long long ans=0;
        int lmax=0,rmax=0;
        while(i<j)
        {
           if(v[i]<=v[j])
           {
               if(v[i]>=lmax)
               {
                   lmax=v[i];
               }
               else
               {
                   ans+=lmax-v[i];
               }
               i++;
           }
                 
                 else
                 {
                     if(rmax<=v[j])
                     {
                         rmax=v[j];
                     }
                     else
                     {
                         ans+=rmax-v[j];
                     }
                     j--;
                 }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends