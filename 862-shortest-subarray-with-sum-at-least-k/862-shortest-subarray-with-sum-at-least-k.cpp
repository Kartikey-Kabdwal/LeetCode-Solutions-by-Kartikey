class Solution {
public:
    
    // int subarray(vector<int>& v, int k)
    
    int shortestSubarray(vector<int>& nums, int k) {
      int n = nums.size();

long long int presum[n];
presum[0]=nums[0];
for(int i=1;i<n;i++) presum[i]=presum[i-1]+nums[i];

deque<pair<long long int,int>>dq;
dq.push_back({0,-1}); // This is because in the starting, the deque is empty so if we didn't include this may miss out on things when the nums[0] itself is >=k

int mini = INT_MAX; // The maximum possible signed integer
for(int i=0;i<n;i++)
{
	long long int val = presum[i];
	while(dq.size() && dq[dq.size()-1].first>=val)
	{
		dq.pop_back();
	}
	dq.push_back({presum[i],i});
	while(dq.size() && val-dq[0].first>=k)
	{
		mini = min(mini, i-dq[0].second);
		dq.pop_front();
	}
}
if(mini == INT_MAX) return -1;
else return mini;
    }
};