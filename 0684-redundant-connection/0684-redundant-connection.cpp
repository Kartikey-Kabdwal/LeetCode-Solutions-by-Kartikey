class Solution {
public:
     int find(vector<int>&v, int i)
    {
        if (v[i] == i){
            return i;
        }
        return find(v, v[i]);
    }
 
    void Union(vector<int>&v,int a, int b)
{
     a = find(v,a);
     b = find(v,b);

     if(a == b) {   // already in the same set so no action needed
        return;
     }
    else{
       v[b] = a;
    }
}
    
   
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int  n=edges.size();
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++)
        {
            v[i]=i;
        }
        
        vector<int>ans;
        for(auto it:edges)
        {
            if(find(v,it[0])==find(v,it[1]))
            {
                ans.push_back(it[0]);
                ans.push_back(it[1]);
                
            }
            else
            {
                Union(v,it[0],it[1]);
            }
        }
        return ans;
        
        
    }
};