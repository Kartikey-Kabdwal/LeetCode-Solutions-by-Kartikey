class Solution {
public:
    double average(vector<int>& v) {
       
return (accumulate(v.begin(),v.end(),0.)-*min_element(v.begin(),v.end())-*max_element(v.begin(),v.end()))/(v.size()-2); 
    }
};