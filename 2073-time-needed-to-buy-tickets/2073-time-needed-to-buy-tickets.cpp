class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        int i=0, n=v.size();    
        int c=0;
        while(v[k])
        {
            if(v[i%n]==0)
            {
                 i++;
                continue;
            } 
            v[i%n]--;
            i++;
            c++;
            
        }
        return c;
        
    }
};