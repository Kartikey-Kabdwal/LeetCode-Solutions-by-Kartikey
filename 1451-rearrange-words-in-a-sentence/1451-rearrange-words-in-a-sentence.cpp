class Solution {
public:
    string arrangeWords(string s) {
        map<int, string> m;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            
            string word = "";
            
            while (isalpha(s[i]))
            {
                word += tolower(s[i]);
                i++;
            }
            m[word.size()] += word + " ";
        }
        
        for (auto it : m) {
            ans += it.second;
        }
        
        ans.pop_back();// to remove last space 
        ans[0] = toupper(ans[0]);
        return ans;
    }
};