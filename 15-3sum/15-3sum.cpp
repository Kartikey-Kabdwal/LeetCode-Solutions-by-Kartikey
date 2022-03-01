class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        
        int n=v.size();
        vector<vector<int>>ans;
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<n-2;i++)
        {
            if(i==0 or (i>0 and v[i]!=v[i-1]))
            {
                int low=i+1,high=n-1,sum=0-v[i];
                
                while(low<high)
                {
                    if(v[low]+v[high]==sum)
                    {
                        vector<int>temp;
                        temp.push_back(v[i]);
                        temp.push_back(v[low]);
                        temp.push_back(v[high]);
                        
                        ans.push_back(temp);
                        
                        while(low<high and v[low]==v[low+1]){ low++ ; }
                        while(low<high and v[high]==v[high-1]) { high-- ; }
                        
                        low++;
                        high--;
                    }
                    else if(v[low]+v[high]<sum) { low++; }
                    else { high-- ; }
                        
                }
                
                
            }
        }
        return ans;
        
        
    }
};