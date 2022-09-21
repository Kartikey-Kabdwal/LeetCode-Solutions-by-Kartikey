class Solution {
public:
    int sum(vector<int>v)
    {
        int c=0,n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                c+=v[i];
            }
        }
        return c;
    }
    vector<int> sumEvenAfterQueries(vector<int>& v, vector<vector<int>>& q) {
        vector<int>ans;
        int n=q.size();
        int sm=sum(v);
        for(int i=0;i<n;i++)
        {
            int temp=v[q[i][1]];
            v[q[i][1]]+=q[i][0];
            if(temp%2==0 and q[i][0]%2==0)
            {
                sm+=q[i][0];
            }
            else if(temp%2!=0 and q[i][0]%2!=0)
            {
                sm+=q[i][0]+temp;
            }
            else if(temp%2==0 and q[i][0]%2!=0)
            {
                sm-=temp;
            }
            ans.push_back(sm);
            
        }
        return ans;
        
        
    }
};