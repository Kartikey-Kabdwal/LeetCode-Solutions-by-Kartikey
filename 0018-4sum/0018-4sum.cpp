class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if(nums.size()<4)
            return ans;
        int n=nums.size();
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1; j<n-2;j++)
            {
                long sum=target-nums[i]-nums[j];
                int l=j+1, r=n-1;
                vector<int> v(4);
                while(l<r)
                {
                    if(nums[l]+nums[r]==sum)
                    {
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[l];
                        v[3]=nums[r];
                        ans.push_back(v);
                        while(l<r && v[2]==nums[l])
                            l++;
                        while(l<r && v[3]==nums[r])
                            r--;
                    }
                    else if(nums[l]+nums[r]<sum)
                        l++;
                    else
                        r--;
                }
                while(j<n-2 && nums[j]==nums[j+1])
                    j++;
            }
            while(i<n-3 && nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};