class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& w) {
        queue<string>q;
        q.push(beginWord);
        int len=0;
        unordered_set<string>s(w.begin(),w.end());
        if(s.find(endWord)==s.end()){
            return 0;
        }
        
            while(!q.empty()){
                len++;
                int qsz=q.size();
                for(int i=0;i<qsz;i++){
                    string x=q.front();
                    q.pop();
                    
                    for(int j=0;j<x.size();j++){
                        char org=x[j];
                        for(char ch='a';ch<='z';ch++){
                            x[j]=ch;
                            if(x==endWord){return len+1;}
                            if(s.find(x)==s.end()){continue;}
                            s.erase(x);
                            q.push(x);  
                        }
                        x[j]=org;
                    }
                }
            }
        return 0;
            
        }
    
};