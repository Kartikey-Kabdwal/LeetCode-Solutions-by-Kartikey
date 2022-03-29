class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            int temp=k-v[i];
            if(m.find(temp)!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[temp]);
                return ans;
            }
            m[v[i]]=i;
        }
        return ans;
        
    }
};