class Solution {
public:
    int minDeletions(string s)
{
     unordered_set<int> st;
     vector<int> freq(26, 0);
     for (int i = 0; i < s.size(); i++)
     {
          freq[s[i] - 'a']++;
     }
     int c = 0;
     sort(freq.begin(), freq.end());
     for (int i = 0; i < 26; i++)
     {
          if (freq[i] == 0)
          {
               continue;
          }
          int x = freq[i];
          while (st.count(x))
          {

               c++;
               x--;
          }

          if (x != 0)
          {
               st.insert(x);
          }
     }
     return c;
}
};