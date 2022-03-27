class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
       
        
        if(t%2==1)
        {
            return {};
        }
        int jumbo = t/2-c;
        if(jumbo<0 or c-jumbo<0) 
        {
            return {};
        }
        return {jumbo,c-jumbo};
        
    }
};