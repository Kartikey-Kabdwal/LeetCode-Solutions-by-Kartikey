class Solution {
public:
    int divisorSubstrings(int n, int k) {
        string x=to_string(n);
        int c=0,i=0,j=0;
        string t="";
        while(j<x.size())
        {
            t+=x[j];
            if(j-i+1==k)
            {
                int y=stoi(t);
                
                if(y and n%y==0)
                {
                    c++;
                }
                cout<<t<<"<-";
                t.erase(0,1);
                i++;
                
            }
            j++;
        }
        // cout<<t;
        return c;
    }
};