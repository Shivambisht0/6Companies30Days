// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
  string decodeString(string s,int &i)
  {
      string result="";
      while(i<s.length() && s[i]!=']')
      {
      if(isdigit(s[i]))
       {

           int k=0;
           while(isdigit(s[i]))
           {
               
               k=k*10+s[i]-'0';
                i++;

           }
           i++;
           string r=decodeString(s,i);
           while(k-->0)
           {
               result=result+r;
           }
           i++;
       }
       else result=result+s[i++];
      }
       return result;
  }
    string decodedString(string s){
        // code here
        int i=0;
        string result="";
        while(i<s.length())
        {
            if(isalpha(s[i]))
            {
                result=result+s[i];
            }
            else if(isdigit(s[i]))
            {
                result=result+decodeString(s,i);
            }
            i++;
        }
        return result;
    }
};

// { Driver Code Starts

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code End
