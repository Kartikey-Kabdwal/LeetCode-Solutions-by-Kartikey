class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        if(n<2)
            return 0;
        int i = 0, res = 0;
        for(int j = 1; j<n; j++){
            if(colors[i] != colors[j])
                i = j;
            else{
                if(neededTime[i] > neededTime[j]){
                    res += neededTime[j];
                }
                else{
                    res += neededTime[i];
                    i = j;
                }
            }
        }
        return res;
    }
};
