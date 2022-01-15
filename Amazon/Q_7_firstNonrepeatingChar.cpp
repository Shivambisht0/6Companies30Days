// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		 string FirstNonRepeating(string A){
		    // Code here
	vector<int> frequency_vector(26,0);
		  vector<char> order_vector;
		  string B="";
		    for(int i=0;i<A.length();i++)
		    {
		        
		        if(!frequency_vector[A[i]-'a'])
		           { 
		               order_vector.push_back(A[i]);
		           }
		            
		       frequency_vector[A[i]-'a']++;
		       bool nonrepeating=false;
		       
		       for(int j=0;j<order_vector.size();j++)
		       {
		           if(frequency_vector[order_vector[j]-'a']==1)
		           {
		               B.push_back(order_vector[j]);
		               nonrepeating=true;
		               break;
		           }
		       }
		     if(!nonrepeating)
		     {
		         B.push_back('#');
		     }
		  
		    }
		    return B;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
