class Solution {
public:
    bool checkIfExist(vector<int>& v) {
        
        unordered_set<int>s;
        for(int i=0;i<v.size();i++)
        {
            if(s.count(2*v[i]) or (v[i]%2==0 and s.count(v[i]/2)))
            {
                return true;
            }
            s.insert(v[i]);
        }
        return false;
        
    }
};