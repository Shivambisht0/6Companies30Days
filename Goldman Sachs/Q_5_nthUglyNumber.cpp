// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    
	     ull p2=1,p3=1,p5=1;
	     ull ugly[n+1];
	     ugly[1]=1;
	     for(int i=2;i<=n;i++)
	     {
	         ull f2=2*ugly[p2];
	         ull f3=3*ugly[p3];
	         ull f5=5*ugly[p5];
	         ull minimum=min(f5,min(f2,f3));
	         ugly[i]=minimum;
	         if(minimum==f2)
	         {
	             p2++;
	         }
	           if(minimum==f3)
	         {
	             p3++;
	         }
	           if(minimum==f5)
	         {
	             p5++;
	         }
	         
	     }// code h
	     return ugly[n];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
