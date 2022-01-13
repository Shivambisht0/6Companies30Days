#include <bits/stdc++.h>
using namespace std;

vector<int> max10(vector<int> &arr, int n)
{
  
    vector<int> result;

   
    priority_queue<int, vector<int>, greater<int>> mypq;

    for (int i = 0; i < 10; i++)
        mypq.push(arr[i]);

    for (int i = 10; i < n; i++)
    {
        if (arr[i] > mypq.top())
        {
            mypq.pop();
            mypq.push(arr[i]);
        }
    }

    while (!mypq.empty())
    {
        result.push_back(mypq.top());
        mypq.pop();
    }
    return result;
}

//Driver code
int main()
{ 
    vector<int> arr={10,45,23,67,89,12,4,55,90,100,7,32,44};
    int n=arr.size();
    vector<int> result=max10(arr,n);
    for(auto i:result)
    {
        cout<<i<<endl;
    }
    return 0;
    
}
