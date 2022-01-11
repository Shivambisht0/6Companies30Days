// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here    
    
    map<char,int> m;
    
    //Inserting into maps
    for(int i=0;i<n;i++)
    {
       // cout<<i<<endl;
       m.insert({nuts[i],1});
    }
 
    // map<char,int> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    // cout<<(*it).first<<":"<<(*it).second<<endl;
    // }    
    
    
  // After the operation the vector will be:"<<endl;
    int k=0;
    for(auto pr:m)
    {
        nuts[k++]=pr.first;
    }
    
    int l=0;
     for(auto pr:m)
    {
        bolts[l++]=pr.first;
    }
    
    // for(auto z:nuts)
    // {
    //     cout<<z<<endl;
    // }
    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code End
