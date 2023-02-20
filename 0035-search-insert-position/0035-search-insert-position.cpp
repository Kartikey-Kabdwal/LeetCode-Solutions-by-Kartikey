class Solution {
public:
    int searchInsert(vector<int>& v, int k) {
        int n=v.size()-1;
        int low=0,high=n;
        
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            mid=low+(high-low)/2;
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
        }
        cout<<low<<" "<<high<<endl;
        return low;
        
    }
};