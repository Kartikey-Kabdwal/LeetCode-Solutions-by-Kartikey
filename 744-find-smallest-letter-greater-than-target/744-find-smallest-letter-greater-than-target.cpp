class Solution {
public:
    char nextGreatestLetter(vector<char>&  v, char k) {
        
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            if(it>k)
            {
                return it;
            }
        }
        return v[0];
    }
};