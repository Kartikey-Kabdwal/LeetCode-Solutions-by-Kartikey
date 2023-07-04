class Solution {
public:
    int singleNumber(vector<int>& nums) {
       /* unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto tt:mp){
            if(tt.second==1){
                return tt.first;
            }
        }
        return 0;  
        */
        sort(nums.begin(),nums.end());
        if(nums.size()<4){
            return nums[0];
        }
        else{
        for(int i=0;i<nums.size();i+=3){
            if((i+1)>=nums.size()){
                if(nums[i]!=nums[i-1]){
                    return nums[i];
                }
            }
            else{
                if(nums[i]!=nums[i+1]){
                    return nums[i];
                }
            }
        }
        }
        return -1;
    }
};
