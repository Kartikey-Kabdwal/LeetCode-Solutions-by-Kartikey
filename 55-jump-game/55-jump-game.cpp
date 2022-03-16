class Solution {
public:
    bool canJump(vector<int>& v) {
        int n=v.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(j<i)
            {
                return false;
            }
            j=max(j,i+v[i]);
            
        }
        return true;
        
    }
};