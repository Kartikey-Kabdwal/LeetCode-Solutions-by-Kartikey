//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
vector<vector<int>> ans;
int q=0;
    bool calc(int i,int j,int n,vector<vector<int>>&v,vector<vector<int>>&vis)
    {
        if(i==n-1 and j==n-1)
        {
             v[i][j]=1e5;
             if(q==0)
             {
            ans=v;
            q=1;
             }
            
            return true;
        }
        if(i>=n or j>=n or v[i][j]==0)
        {
            return false;
        }
        
        if(vis[i][j]!=-1)
        {
            return v[i][j];
        }
        
        
        int x=v[i][j];
        int k=v[i][j];
        v[i][j]=1e5;
        bool z=false;
        for(int f=1;f<=k;f++){
            
             z|=calc(i,j+f,n,v,vis)|calc(i+f,j,n,v,vis);
             
            
        }
        v[i][j]=x;
        return vis[i][j]=z;
    }
    
	vector<vector<int>> ShortestDistance(vector<vector<int>>&v){
	   int n=v.size();
	   vector<vector<int>>vis(n,vector<int>(n,-1));
	   
	    
	    if(!calc(0,0,n,v,vis))
	    {
	        return {{-1}};
	    }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                if(ans[i][j]==1e5)
                {
                    ans[i][j]=1;
                }
                else
                {
                    ans[i][j]=0;
                }
            }
        }
        return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends