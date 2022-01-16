// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string result="";
         
        while(n>0) 
        {
            // To make the number 0 indexed
            int rem=n%26;
            if(rem==0)
            {
                char s='Z';
                result=s+result;
                n=(n/26)-1;
               
                
            }
            else
            {
                char s='A'+(rem-1);
                result=s+result;
                n=n/26;
            }
            
           
            
        }
        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends
