class Solution {
public:
    int findmin(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while(l < r) {
            while(l < r && nums[l] == nums[l+1]) l++;
            while(r > l && nums[r] == nums[r-1]) r--;
            
            if(nums[l] < nums[r]) return l;
            
            int m = l + (r - l)/2;
            
            if(nums[m] < nums[l]) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        return r;
    }
    
    bool find(vector<int>& nums, int target, int l, int r) {
        while(l <= r) {
            int m = l + (r - l)/2;
            if(nums[m] == target) {
                return true;
            } else if(nums[m] > target) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return false;
    }
    
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int min = findmin(nums);
        if(target >= nums[min] && target <= nums[r]) {
            return find(nums, target, min, r);
        } else if(min > 0 && target >= l && target <= nums[min-1]) {
            return find(nums, target, l, min-1);
        }
        return false;
    }
};