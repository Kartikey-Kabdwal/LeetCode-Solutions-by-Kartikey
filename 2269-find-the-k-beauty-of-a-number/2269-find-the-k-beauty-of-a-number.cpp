class Solution {
public:
    int divisorSubstrings(int nums, int k) {
       string s=to_string(nums);
        int n=s.size();
        int i=0,j=0;
        int c=0;
        string temp="";
        
        while(j<n)
        {
            temp+=s[j];
            if(j-i+1==k)
            {                
                int f=stoi(temp);
                cout<<f<<" ";
                if(f!=0 and nums%f==0 )
                {
                    c++;
                }
                temp.erase(0,1); 
                i++;
            }
            
            j++;
        }
        return c;
    }
};