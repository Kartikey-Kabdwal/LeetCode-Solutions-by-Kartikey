class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        int n=v.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(v[i]+v[j]==k)
            {
                return {i+1,j+1};
            }
            else if(v[i]+v[j]>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {-1,-1};
        
    }
};