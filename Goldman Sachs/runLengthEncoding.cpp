// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  int len=src.length();
     string s;
   int count;
  if(len==0)
  {
    count=0;
    return " ";
  }
    count=1;
    
  for(int i=0;i<len;i++)
  {
   
    if(src[i]==src[i+1])
    {
        count++;
    }
    if(src[i]!=src[i+1])
    {
        s=s+src[i]+to_string(count);
        count=1;
        
    }
  }
  return s;
}     
 
