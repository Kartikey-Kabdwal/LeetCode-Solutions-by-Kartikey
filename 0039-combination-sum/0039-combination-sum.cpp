class Solution {
public:
    vector<vector<int>>ans;
   
    
     void calc(int i,int k,vector<int>& v, vector<int>&temp)
    {
         if(k == 0) 
        {
            ans.push_back(temp);
             return; 
        }
         if(k<0)
         {
             return;
         }
        if(i>=v.size())
        {
            
            return;
            
        }
        
             calc(i+1,k,v,temp);
            
             
         
          temp.push_back(v[i]);
          calc(i,k-v[i],v,temp);
         temp.pop_back();
       
         
            
        
    }
    vector<vector<int>> combinationSum(vector<int>& v, int k) {
         vector<int>temp;
        calc(0,k,v,temp);
        return ans;
        
    }
};