//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int minStepToReachTarget(vector<int>&a, vector<int>&b, int n){
	    vector<vector<int>>vis(n+1,vector<int>(n+1,0));
	    queue<pair<pair<int,int>,int>>q;
	    q.push({{a[0]-1,a[1]-1},0});
	    vis[a[0]][a[1]]=1;
	     int dx[]={2,2,-2,-2,1,1,-1,-1};
         int dy[]={1,-1,1,-1,-2,2,-2,2};
	    while(!q.empty())
	    {
	        int x=q.front().first.first;
	        int y=q.front().first.second;
	        int dis=q.front().second;
	        q.pop();
	        if(x==b[0]-1 and y==b[1]-1)
	        {
	            return dis;
	        }
	        for(int i=0;i<8;i++)
	        {
	            int nr=x+dx[i];
	            int nc=y+dy[i];
	            if(nr<0 or nc<0 or nr>=n or nc>=n or vis[nr][nc]==1)
                {
                    continue;
                }
                else
                {
                    q.push({{nr,nc},dis+1});
                    vis[nr][nc]=1;
                }
	        }
	    }
	    return -1;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends