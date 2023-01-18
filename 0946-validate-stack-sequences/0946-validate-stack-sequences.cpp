class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>s;
        int n=pushed.size();
        int j=0;
        for(auto it:pushed)
        {
          s.push(it);
            while(!s.empty() and s.top()==popped[j] and j<n)
            {
                s.pop();
                j++;
            }
        }
        return s.empty();
        
        
    }
};