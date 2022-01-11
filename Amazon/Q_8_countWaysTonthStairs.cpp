// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int n)
    {
        // your code here
 
    if(n==0)
     cw[0]=1;
     
        else if(n==1)
        {
            cw[1]=1;
        }
        else if(n==2)
        {
            
            cw[2]=2;
        }
        else 
        {
         
             cw[n]=1+countWays(n-2);
         
        }
    return cw[n];
            
      }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends
