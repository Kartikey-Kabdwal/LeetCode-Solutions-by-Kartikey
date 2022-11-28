class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>won,lost;
        for(auto it:matches)
        {
            won[it[0]]++;
            
           
        }
        for(auto it:matches)
        {
           lost[it[1]]++;
            if(won.find(it[1])!=won.end())
            {
                won.erase(it[1]); 
            }
           
        }
        matches.clear();
        vector<int>tmp;
        for(auto it:won)
        {
            tmp.push_back(it.first);    
        }
        matches.push_back(tmp);
        vector<int>tmp2;
        for(auto it:lost)
        {
            if(it.second==1)
            {
                tmp2.push_back(it.first);
            }
        }
        matches.push_back(tmp2);
    
        return matches;
        
    }
};