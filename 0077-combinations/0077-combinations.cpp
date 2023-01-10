class Solution {
public:
    
    void calc(int i,int n,int k,vector<vector<int>>&ans,vector<int>&temp)
    {
        if(k==0)
            {
            
            ans.push_back(temp);
            return;
                
            }
        if(i>n )
        {
            return;
            
        }
        temp.push_back(i);
        calc(i+1,n,k-1,ans,temp);
        temp.pop_back();
        calc(i+1,n,k,ans,temp);
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        
         calc(1,n,k,ans,temp);
        
        return ans;
        
    }
};