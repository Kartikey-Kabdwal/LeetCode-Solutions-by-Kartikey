class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        
        for(int i=0; i<nums.size(); i++){
            int low = i+1, high = nums.size()-1;
            
            // two pointer approach
            while(low<high){
                int sum = nums[i] + nums[low] + nums[high];
                
                if(abs(target-sum)<abs(target-res)){
                    res = sum;
                }
                if(sum<target){
                    low++;
                } else if(sum>target){
                    high--;
                } else {
                    return sum;
                }
            }
        }
        return res;
    }
};