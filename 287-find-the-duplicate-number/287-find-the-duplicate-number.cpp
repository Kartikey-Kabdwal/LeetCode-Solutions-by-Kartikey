class Solution {
public:
    int findDuplicate(vector<int>& v) {
        sort(v.begin(),v.end());
        int i=0;
        for( i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
                break;
            }
        }
        return v[i];
        
    }
};