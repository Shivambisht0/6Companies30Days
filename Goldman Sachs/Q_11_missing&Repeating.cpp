// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(int *arr, int n) {
        // code here
        
         bool helper[n+1];
        fill_n(helper,n+1,false);
       
        unsigned long long int repeated_num;
        unsigned long long int missing_num;
        vector<int> result;
        for(int i=0;i<n;i++)
        {
            if(helper[arr[i]]==true)
            {
                repeated_num=arr[i];
                
            }
            helper[arr[i]]=false;
            
        }
        for(int j=1;j<n+1;j++)
        {
            if(helper[j]==false)
            {
                missing_num=j;
                break;
            }
        }
         result.push_back(repeated_num);
       result.push_back(missing_num);
       
        
        
        
        return result;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
