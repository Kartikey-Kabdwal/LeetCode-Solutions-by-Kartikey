class Solution {
public:
    static bool func(int a, int b)
{
     if (__builtin_popcount(a) == __builtin_popcount(b))
     {
        
          return a<b;
       
     }
      return __builtin_popcount(a) < __builtin_popcount(b);;
}
    vector<int> sortByBits(vector<int>& v) {
         sort(v.begin(), v.end(), func);
        return v;
        
    }
};