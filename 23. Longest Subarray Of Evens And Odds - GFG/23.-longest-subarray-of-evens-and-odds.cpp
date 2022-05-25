// { Driver Code Starts
//Initial Template for C++
#include<iostream> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    static int check(int n)
    {
        if(n&1)
        {
            return 1;
        }
        return 0;
    }
    int maxEvenOdd(int v[], int n) 
    { 
       int i=0,j=1;
       int len=0;
       int ans=0;
       while(j<n)
       {
           if(check(v[j-1])!=check(v[j]))
           {
               len++;
           }
           else
           {
               i=j;
               len=0;
           }
           ans=max(ans,len);
           j++;
       }
        return ans+1;
        
    } 
   
};

// { Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends