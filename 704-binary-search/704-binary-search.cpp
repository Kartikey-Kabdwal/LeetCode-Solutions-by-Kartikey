class Solution {
public:
    int search(vector<int>& v, int k) {
        
        int n=v.size();
        int start=0,end=n-1,mid=(start+end)/2;
        while(start<=end)
        {
            if(v[mid]==k)
            {
                return mid;   
            }
            else if(v[mid]<k)
            {
                start=mid+1;     
            }
            else
            {
                end=mid-1;
            }
            mid=(end+start)/2;
        }
        return -1;
        
        
    }
};