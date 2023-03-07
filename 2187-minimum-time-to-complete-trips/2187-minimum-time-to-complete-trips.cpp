class Solution {
public:
    long long calc(long long time, vector<int> v)
{
     long long c = 0;
     for (long long i = 0; i < v.size(); i++)
     {
          c += time / v[i];
     }
     return c;
}
long long minimumTime(vector<int> &time, int totalTrips)
{
     sort(time.begin(), time.end());

     long long x = *max_element(time.begin(), time.end());
     long long low = 0, high = x * totalTrips;

     while (low < high)
     {
          long long mid = low + (high - low) / 2;

          long long k = calc(mid, time);
          if (k>=totalTrips)
          {
               high = mid;
          }
          else
          {
               low = mid + 1;
          }
     }
     return low;
}
};