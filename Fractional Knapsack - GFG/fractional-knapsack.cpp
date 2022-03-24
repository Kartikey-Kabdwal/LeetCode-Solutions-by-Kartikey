// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool func(Item a,Item b)
{
    double r1=( double)a.value/(double)a.weight;
    double r2=( double)b.value/(double)b.weight;
    return r1>r2;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item a[], int n)
    {
        sort(a,a+n,func);
        double ans=0.0;
        int cur=0;
        for(int i=0;i<n;i++)
        {
            if(cur+a[i].weight<=w)
            {
                cur+=a[i].weight;
                ans+=a[i].value;
            }
            else
            {
                int remain=w-cur;
                ans+=(a[i].value/(double)a[i].weight)*(double)remain;
                break;
            }
        }
        return ans;
    }
    
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends