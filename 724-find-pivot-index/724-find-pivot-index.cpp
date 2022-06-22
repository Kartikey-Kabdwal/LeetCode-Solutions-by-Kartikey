class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int sumR=accumulate(a.begin(),a.end(),0);
        int sumL=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            sumR-=a[i];
            if(sumL==sumR)
            {
                return i;
            }
            sumL+=a[i];
            
        }
        return -1;
        
    }
};