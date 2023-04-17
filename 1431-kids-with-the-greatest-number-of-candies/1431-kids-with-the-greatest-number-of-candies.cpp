class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int x=*max_element(candies.begin(),candies.end());
        
        vector<bool>v;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=x)
            {
                v.push_back(true);
                continue;
            }
            v.push_back(false);
        }
        return v;
    }
};