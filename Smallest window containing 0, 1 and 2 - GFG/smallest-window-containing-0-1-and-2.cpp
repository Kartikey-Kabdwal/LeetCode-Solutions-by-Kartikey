// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        int ans=INT_MAX;
        bool zero=false,one=false,two=false;
        int zeroi,onei,twoi;
        for(int i=0;i<S.size();i++){
            if(S[i]=='0'){
                zero=true;
                zeroi=i;
            }else if(S[i]=='1'){
                one=true;
                onei=i;
            }else if(S[i]=='2'){
                two=true;
                twoi=i;
            }
            if(zero && one && two){
                ans=min(ans,max({zeroi,onei,twoi})-min({zeroi,onei,twoi}));
            }
            
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans+1;
    }
    
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends