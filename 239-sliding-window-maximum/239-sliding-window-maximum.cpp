class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        
        vector<int>v;
        deque<int>q;
        int n=a.size();
        int i=0,j=0;
        while(j<n)
        {
            while(!q.empty() && a[j] > q.back())
            { 
                q.pop_back() ;
            } 
        
            q.push_back(a[j]) ;
      
            if(j-i+1==k)
            { 
                v.push_back(q.front()) ;
                if(a[i] == q.front())
                {
                    q.pop_front() ;
                } 
                i++ ;
            }
            
                
                j++ ; 
            
        }
        
        return v ;
    }
};