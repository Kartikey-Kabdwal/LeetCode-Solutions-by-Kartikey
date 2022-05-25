// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        string l="",r="";
        for(int i=0;i<n;i++)
        {
            if(islower(s[i]))
            {
                l+=s[i];
            }
            else
            {
                r+=s[i];
            }
        }
        
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        
        int i=0,j=0;
        while(i<n and j<l.size())
        {
            if(islower(s[i]))
            {
                s[i]=l[j];
                j++;
                
            }
            i++;
        }
        i=0,j=0;
        while(i<n and j<r.size())
        {
            if(isupper(s[i]))
            {
                s[i]=r[j];
                j++;
            }
            i++;
        }
        return s;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends