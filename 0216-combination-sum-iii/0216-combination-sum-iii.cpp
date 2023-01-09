class Solution {
public:
    
    void calc(int i,int n,int k,vector<int>temp,vector<vector<int>>&ans)
    {
        if(i>9)
        {
          if(k==0 and n==0)
          {
              ans.push_back(temp);
             
          }
             return;
        }  
        
        temp.push_back(i);
        calc(i+1,n-i,k-1,temp,ans);
        temp.pop_back();
        calc(i+1,n,k,temp,ans);
  
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        calc(1,n,k,temp,ans);
        return ans;
        
    }
};