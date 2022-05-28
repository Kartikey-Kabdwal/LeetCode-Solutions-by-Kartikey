class Solution {
public:
    int missingNumber(vector<int>& v) {
        
        int x=accumulate(v.begin(),v.end(),0);
        int n=v.size();
        n=(n*(n+1))/2;
        return n-x;
        
    }
};