#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int start = 0;
    int end = v.size() - 1;
    // while(start <= end)
    // {
    //     swap(v[start], v[end]);
    //     start++;
    //     end--;
    // }
    for(int i =0 ;i<n/2; i++)
    {
        int temp =v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=temp;
    }
    for(int i =0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
