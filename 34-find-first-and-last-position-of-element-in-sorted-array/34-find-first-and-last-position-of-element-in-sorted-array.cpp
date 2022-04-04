class Solution {
public:
    vector<int> searchRange(vector<int>& v, int k) {
        
        int  id1=lower_bound(v.begin(),v.end(),k)- v.begin();
        int id2=lower_bound(v.begin(),v.end(),k+1)- v.begin()-1;
        if(id1<v.size() and v[id1]==k)
        {
            return {id1,id2};
        }
        return {-1,-1};
        
    }
};