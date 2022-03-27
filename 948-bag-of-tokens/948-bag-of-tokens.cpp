class Solution {
public:
    int bagOfTokensScore(vector<int>& v, int p) {
        sort(v.begin(),v.end());
        int c=0,res=0;
        int i=0,j=v.size()-1;
        while(i<=j)
        {
            if(v[i]<=p)
            {
                c++;
                p-=v[i];
                i++;
                
                res = max(res, c);
            }
            else if(c>0)
            {
                p+=v[j];
                j--;
                c--;
            }
            else {
                break;
            }
            
        }
        return res;
        
    }
};