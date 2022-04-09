// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    string x="";
	    for(int i=0;i<s.size();i++)
	    {
	        if(isalpha(s[i]))
	        {
	            x+=s[i];
	        }
	    }
	    for(int i=0;i<x.size()/2;i++)
	    {
	        if(x[i]!=x[x.size()-i-1])
	        {
	            return false;
	        }
	    }
	    return true;
	}
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  

  // } Driver Code Ends