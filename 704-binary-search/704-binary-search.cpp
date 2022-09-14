class Solution {
public:
    int search(vector<int>& v, int k) {
        
        int high=v.size()-1, low=0;
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            if(v[mid]==k)
            {
                return mid;
            }
            else if(v[mid]>k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return -1;
        
    }
};