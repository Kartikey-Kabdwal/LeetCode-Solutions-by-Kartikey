class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int>s;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!="+" and v[i]!="C" and v[i]!="D")
            {
                s.push(stoi(v[i]));
            }
            else if(v[i]=="C")
            {
                s.pop();
            }
            else if(v[i]=="D")
            {
                s.push(s.top()*2);
            }
            else if(v[i]=="+")
            {
               int x=s.top();
                s.pop();
                int y=s.top();
                s.push(x);
                s.push(x+y);
            }
        }
        int sum=0;
        while(!s.empty())
        {
           sum+=s.top();
            s.pop();
        }
        return sum;
        
    }
};