class Solution {
public:
    int findMin(vector<int>& v) {
        int n=v.size();
        int low=0,high=n-1;
        int mid=(low+high)/2;
        while(low<high)
        {
            if(v[low]<v[high])
            {
                return v[low];
            }
            mid=(low+high)/2;
            if(v[mid]>=v[low])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return v[low];
    }
};