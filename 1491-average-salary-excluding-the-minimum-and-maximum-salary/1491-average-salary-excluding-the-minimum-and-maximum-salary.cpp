class Solution {
public:
  // We used 0. - note the dot - to indicate that the type is double. If the initial value is just 0 - without the dot - the return type will be integer, and we will do integer division (and get wrong results).
  double average(vector<int>& s) {
    return (accumulate(begin(s), end(s), 0.) - *min_element(begin(s), end(s)) 
        - *max_element(begin(s), end(s))) / (s.size() - 2);
}
};