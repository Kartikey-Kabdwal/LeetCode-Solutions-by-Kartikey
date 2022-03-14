class Solution {
public:
    double average(vector<int>& v) {
       
        double n=v.size();
        double c=accumulate(v.begin(),v.end(),0);
        double a=*max_element(v.begin(),v.end());
        double b=*min_element(v.begin(),v.end());
        return (c-a-b)/(n-2); 
    }
};