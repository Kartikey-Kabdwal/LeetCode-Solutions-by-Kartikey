class Solution {
public:
    char nextGreatestLetter(vector<char>&  v, char k) {
        
        auto it=upper_bound(v.begin(),v.end(),k);
            return it==v.end()?v[0]:*it;
    }
};