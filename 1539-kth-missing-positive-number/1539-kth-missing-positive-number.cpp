class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        unordered_set<int>s(v.begin(),v.end());
        int i=0;
        while(k)
        {
            i++;
            if(s.count(i))
            {
                continue;
            }
            k--;
        }
        return i;
        
    }
};