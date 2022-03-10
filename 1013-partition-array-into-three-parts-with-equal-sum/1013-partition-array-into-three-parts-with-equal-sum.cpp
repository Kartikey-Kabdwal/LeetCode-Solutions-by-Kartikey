class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& v) {
        int s=accumulate(v.begin(),v.end(),0);
        
        if(s%3!=0)
        {
            return false;
        }
       
            s=s/3;
            int temp=0;
            int c=0;
            for(int i=0;i<v.size();i++)
            {
                temp+=v[i];
                if(temp==s)
                {
                    c++;
                    temp=0;
                }
                
                
                
            }
       if(c>=3)
                {
                    return true;
                }
        return false;
        
    }
};