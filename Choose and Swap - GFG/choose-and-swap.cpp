// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
	public:
		string LexicographicallyMinimum(string str){
		    set<char>s;
		    for(int i=0;i<str.size();i++)
		    {
		        s.insert(str[i]);
		        
		    }
		    for(int i=0;i<str.size();i++)
		    {
		        s.erase(str[i]);
		        if(s.empty())
		        {
		            break;
		        }
		        
		        char ch=*s.begin();
		        if(ch<str[i])
		        {
		            int ch2=str[i];
		            for(int j=0;j<str.size();j++)
		            {
		                if(str[j]==ch)
		                {
		                    str[j]=ch2;
		                }
		                    else if(str[j]==ch2)
		                    {
		                        str[j]=ch;
		                    }
		                
		            }
		            break;
		        }
		    }
		    return str;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		string ans = obj.LexicographicallyMinimum(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends