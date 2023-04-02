class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b)
    {
        return a.first-a.second>b.first-b.second;
    }
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        vector<pair<int,int>>v;
        int n=reward1.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({reward1[i],reward2[i]});
        }
        sort(v.begin(),v.end(),comp);
        for(auto it:v)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        int ans=0;
        for(auto it:v)
        {
            if(k)
            {
                k--;
                ans+=it.first;
                continue;
            }
            ans+=it.second;
            
            
        }
        return ans;
        
        
    }
};