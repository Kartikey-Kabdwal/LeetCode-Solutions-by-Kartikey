class Solution {
public:
   string getstr(int a,int b)
    {
        return a==b ? to_string(a) : to_string(a)+"->"+to_string(b);
    }
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ans;
        int  n = nums.size();
        if(!n) return ans;
        
        int first = nums[0];
        
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]+1!=nums[i])
            {
                ans.push_back(getstr(first,nums[i-1]));
                first = nums[i];
            }
        }
        
        ans.push_back(getstr(first,nums.back()));
        return ans;
    }
};