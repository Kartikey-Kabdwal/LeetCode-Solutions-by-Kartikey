class Solution {
public:
    string removeDuplicateLetters(string s) {
       unordered_map<char,int>freq;
        unordered_map<char,bool>vis;//by default all is false
        string s1="";
        for(auto k:s)
            freq[k]++;
        for(auto k:s){
            freq[k]--;
            if(vis[k])
                continue;
            while(!s1.empty()&&s1.back()>k&&freq[s1.back()]>0){
           
                vis[s1.back()]=false;
                s1.pop_back();
            }
            vis[k]=true;
            s1+=k;
            
        }
        return s1;
    }
};