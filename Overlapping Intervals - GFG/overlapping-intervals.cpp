// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
        vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         vector<vector<int>> result;
         sort(intervals.begin(), intervals.end());
         if(intervals.size())
            result.push_back(intervals[0]);
         for(int i = 1; i < intervals.size(); i++){
             if(intervals[i][0] <= result[result.size()-1][1]){
                 int x = min(intervals[i][0], result[result.size()-1][0]);
                 int y = max(intervals[i][1], result[result.size()-1][1]);
                 result[result.size()-1][0] = x;
                 result[result.size()-1][1] = y;
             }
             else
                result.push_back(intervals[i]);
         }
         return result;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends