class Solution {
public:
     int calc(vector<int> &v, int k)
        {
            int i = 0, j = 0;
            int ans = 0;
            int n=v.size();
            int odd=0;
            while (j < n)
            {
                odd+=v[j]%2;
                while (odd > k)
                {
                    odd-=v[i]%2;
                    
                    i++;
                }
                ans += j - i + 1;

                j++;
            }
            return ans;
        }
    int numberOfSubarrays(vector<int>& v, int k) {
        return calc(v,k)-calc(v,k-1);
        
    }
};