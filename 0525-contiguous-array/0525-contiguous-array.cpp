class Solution {
public:
    int findMaxLength(vector<int>& v) {
        
        int sum=0;
        int i=0,j=0;
        int n=v.size();
        unordered_map<int,int>m;
        m[0]=0;
        int ans=0;
        while(j<n)
        {
            sum+=v[j]==1?1:-1;
            if(m.find(sum)==m.end())
            {
                m[sum]=j;
            }
            else
            {
                if(sum==0)
                {
                    ans=max(ans,j-m[sum]+1);
                }
                else
                {
                    ans=max(ans,j-m[sum]);
                }
                
            }
            
            j++;
        }
        // for(auto it:m)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        return ans;
        
    }
};