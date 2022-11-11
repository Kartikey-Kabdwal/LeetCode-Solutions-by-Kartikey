class Solution {
public:
    int maxProduct(vector<int> v)
{
     int n = v.size();
     int res = v[0];
     int l = 0, r = 0;
     for (int i = 0; i < n; i++)
     {
          l = (l ? l : 1) * v[i];
          r = (r ? r : 1) * v[n - 1 - i];
          res = max(res, max(l, r));
     }
     return res;
}
};