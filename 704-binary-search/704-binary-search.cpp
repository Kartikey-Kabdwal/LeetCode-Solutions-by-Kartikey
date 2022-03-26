class Solution {
public:
    int search(vector<int>& v, int k) {
        int n=v.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(v[mid]==k)
            {
                return mid;
            }
            else if(v[mid]<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
        }
        return -1;
        
        
    }
};